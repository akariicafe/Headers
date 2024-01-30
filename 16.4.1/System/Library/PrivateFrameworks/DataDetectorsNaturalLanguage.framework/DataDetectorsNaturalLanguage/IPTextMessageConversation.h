@class NSArray, NSMutableDictionary, IPCircularBufferArray;

@interface IPTextMessageConversation : NSObject {
    IPCircularBufferArray *_lastMessages;
}

@property (retain) NSMutableDictionary *messageByMessageIdentifierDictionary;
@property (retain) NSMutableDictionary *eventsByMessageIdentifierDictionary;
@property (copy, nonatomic) NSArray *allMessages;

+ (id)collapseMessages:(id)a0;
+ (id)collapsedMessagesFromMessages:(id)a0;

- (void)addMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)scanEventsInLastMessageOnly:(BOOL)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_scanEventsInLastMessageOnly:(BOOL)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)eventsInPreviouslyScannedMessageWithIdentifier:(id)a0;
- (id)messageForIdentifier:(id)a0;

@end
