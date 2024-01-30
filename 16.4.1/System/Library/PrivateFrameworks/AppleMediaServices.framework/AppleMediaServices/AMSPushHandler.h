@class NSDictionary, AMSPushConfiguration;
@protocol AMSBagProtocol, AMSPushHandlerDelegate, AMSPushHandlerContract;

@interface AMSPushHandler : NSObject

@property (readonly, nonatomic) NSDictionary *enabledParsables;
@property (readonly, nonatomic) id<AMSPushHandlerContract> bagContract;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (weak, nonatomic) id<AMSPushHandlerDelegate> delegate;
@property (readonly, nonatomic) AMSPushConfiguration *configuration;

- (void)handleNotification:(id)a0;
- (void)_handlePushNotification:(id)a0;
- (void)dealloc;
- (void)registerForEngagementPushes;
- (id)initWithConfiguration:(id)a0 bag:(id)a1;
- (id)initWithConfiguration:(id)a0 bagContract:(id)a1;
- (BOOL)shouldHandleNotification:(id)a0;
- (void).cxx_destruct;

@end
