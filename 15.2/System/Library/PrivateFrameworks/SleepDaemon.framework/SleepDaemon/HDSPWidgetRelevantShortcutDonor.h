@class INRelevantShortcutStore;

@interface HDSPWidgetRelevantShortcutDonor : NSObject <HDSPWidgetRelevanceDonor> {
    INRelevantShortcutStore *_store;
}

- (void)donateRelevanceForWidgetState:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_setRelevantShortcuts:(id)a0;

@end
