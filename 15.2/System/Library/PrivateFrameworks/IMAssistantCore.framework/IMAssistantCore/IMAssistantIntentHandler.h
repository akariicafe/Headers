@class NSMutableArray;

@interface IMAssistantIntentHandler : _INExtension {
    NSMutableArray *_recentIntentHandlers;
}

- (id)handlerForIntent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)existingHandlerForIntentIdentifier:(id)a0;
- (void)updateRecentlyUsedHandlersWithHandler:(id)a0;

@end
