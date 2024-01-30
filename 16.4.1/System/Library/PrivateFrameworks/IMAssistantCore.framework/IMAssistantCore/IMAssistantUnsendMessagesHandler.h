@class NSString;

@interface IMAssistantUnsendMessagesHandler : IMAssistantMessageQueryHandler <INUnsendMessagesIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeRetractedMessageItem:(id)a0;

- (void)handleUnsendMessages:(id)a0 completion:(id /* block */)a1;
- (void)chatsForMessageIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)retractPartIndex:(long long)a0 fromMessageItem:(id)a1 chat:(id)a2 backwardCompatabilityText:(id)a3;

@end
