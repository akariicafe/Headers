@class NSString;

@interface ImplicitlyAssumedIdentityEntitlement : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *impliedBundleID;
@property (readonly, nonatomic) BOOL isWebBrowser;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 impliedBundleID:(id)a1 isWebBrowser:(BOOL)a2;

@end
