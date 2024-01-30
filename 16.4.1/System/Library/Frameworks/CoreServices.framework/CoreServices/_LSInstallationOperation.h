@class NSString;

@interface _LSInstallationOperation : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) long long installType;
@property (readonly, nonatomic) id /* block */ block;
@property (nonatomic) BOOL claimed;

- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 installType:(long long)a1 block:(id /* block */)a2;

@end
