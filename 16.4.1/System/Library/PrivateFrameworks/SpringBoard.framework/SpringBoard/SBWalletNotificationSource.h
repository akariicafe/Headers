@class NSString, NCNotificationDispatcher;

@interface SBWalletNotificationSource : NSObject <NCNotificationSource>

@property (retain, nonatomic) NCNotificationDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDispatcher:(id)a0;
- (void).cxx_destruct;
- (void)modifyNotificationRequestForCardItem:(id)a0;
- (void)postNotificationRequestForCardItem:(id)a0;
- (void)withdrawNotificationRequestForCardItem:(id)a0;

@end
