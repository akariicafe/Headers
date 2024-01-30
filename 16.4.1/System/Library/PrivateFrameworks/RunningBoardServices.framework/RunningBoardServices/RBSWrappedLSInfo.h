@class NSString;

@interface RBSWrappedLSInfo : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *personaString;

+ (id)infoWithBundleID:(id)a0 personaString:(id)a1;

- (id)_initWithBundleID:(id)a0 personaString:(id)a1;
- (void).cxx_destruct;

@end
