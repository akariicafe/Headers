@class NSString;
@protocol NFFieldDetectSessionDelegate;

@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks> {
    id<NFFieldDetectSessionDelegate> _delegate;
    BOOL _fieldNotificationSent;
}

@property id<NFFieldDetectSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndUnexpectedly;
- (void).cxx_destruct;
- (void)didDetectField:(BOOL)a0;
- (void)didDetectFieldNotification:(id)a0;
- (BOOL)isTimeLimited;

@end
