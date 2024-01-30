@class NSMutableArray;

@interface IMAssistantIntentHandler : _INExtension {
    NSMutableArray *_recentIntentHandlers;
}

- (id)init;
- (void).cxx_destruct;
- (id)handlerForIntent:(id)a0;
- (id)existingHandlerForIntentIdentifier:(id)a0;
- (void)updateRecentlyUsedHandlersWithHandler:(id)a0;

@end
