@class INRelevantShortcutStore;

@interface HDSPWidgetRelevantShortcutDonor : NSObject <HDSPWidgetRelevanceDonor> {
    INRelevantShortcutStore *_store;
}

- (id)init;
- (void).cxx_destruct;
- (void)_setRelevantShortcuts:(id)a0;
- (void)donateRelevanceForWidgetState:(long long)a0;

@end
