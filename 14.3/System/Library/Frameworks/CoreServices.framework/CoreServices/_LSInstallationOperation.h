@class NSString;

@interface _LSInstallationOperation : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) long long installType;
@property (readonly, nonatomic) id /* block */ block;
@property (nonatomic) BOOL claimed;

- (id)initWithBundleID:(id)a0 installType:(long long)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)description;

@end
