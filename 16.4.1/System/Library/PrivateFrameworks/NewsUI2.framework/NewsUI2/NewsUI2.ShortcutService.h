@interface NewsUI2.ShortcutService : NSObject <FCSubscriptionObserving, FCShortcutListObserving> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ shortcutList;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ sportsOnboardingManager;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ _orderedShortcuts;
}

- (void)shortcutList:(id)a0 didAddShortcuts:(id)a1 changedShortcuts:(id)a2 removedShortcuts:(id)a3;
- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
