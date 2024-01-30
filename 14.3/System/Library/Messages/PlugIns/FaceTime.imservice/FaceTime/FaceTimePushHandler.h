@class NSString, NSArray, NSData, NSMutableArray;

@interface FaceTimePushHandler : NSObject <IDSPushHandlerDelegate> {
    NSMutableArray *_handlers;
    NSArray *_topics;
    BOOL _registeredForPush;
    BOOL _isListening;
}

@property (readonly, nonatomic) NSData *pushToken;
@property (nonatomic) BOOL registered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandToHandlerBlock;

- (void)dealloc;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)handler:(id)a0 didReceiveMessage:(id)a1 forTopic:(id)a2 fromID:(id)a3 messageContext:(id)a4;
- (id)initWithTopics:(id)a0;
- (void)configureAsMacNotificationCenterObserver:(id)a0;
- (id)copyHandlersForEnumerating;
- (id)_pushTopics;
- (void)_updateListenerIfNeeded;
- (void)_acceptIncomingPushes;
- (void)_ignoreIncomingPushes;

@end
