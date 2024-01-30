@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) long long orientation;

- (id)initWithOrientation:(long long)a0 andReason:(id)a1;
- (void).cxx_destruct;

@end
