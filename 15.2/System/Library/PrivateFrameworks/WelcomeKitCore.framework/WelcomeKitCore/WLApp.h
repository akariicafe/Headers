@class NSString, NSNumber;

@interface WLApp : NSObject

@property (nonatomic) BOOL isFree;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSNumber *appStoreIdentifier;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 appStoreIdentifier:(id)a1 isFree:(BOOL)a2;

@end
