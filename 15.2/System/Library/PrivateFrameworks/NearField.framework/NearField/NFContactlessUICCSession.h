@class NSString;
@protocol NFContactlessUICCSessionDelegate;

@interface NFContactlessUICCSession : NFSession <NFContactlessSessionCallbacks> {
    BOOL _fieldNotificationSent;
}

@property id<NFContactlessUICCSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
