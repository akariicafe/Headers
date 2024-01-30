@interface StocksUI.AudioActionHandler : _TtCs12_SwiftObject <NAAudioActionHandlerType> {
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ playbackState;
}

- (void)setAudioButtonMenuOn:(id)a0;
- (id)buttonActionsFor:(id)a0 willPerform:(id /* block */)a1;
- (void)performActionsFor:(id)a0 willPerform:(id /* block */)a1;
- (id)accessibilityActionsForSheetFor:(id)a0 willPerform:(id /* block */)a1;

@end
