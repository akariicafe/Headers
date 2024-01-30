@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)initWithOrientation:(long long)a0 andReason:(id)a1;

@end
