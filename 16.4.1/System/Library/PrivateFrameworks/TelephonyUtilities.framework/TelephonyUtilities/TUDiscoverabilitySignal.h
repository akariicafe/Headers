@class NSString;

@interface TUDiscoverabilitySignal : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *context;

+ (BOOL)isSeniorUser;
+ (void)logTipKitAnalyticsEventNamed:(id)a0;

- (void).cxx_destruct;
- (void)donateSignalWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 context:(id)a1;

@end
