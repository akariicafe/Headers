@interface ConversationKit.ConversationControlsMenuButton : ConversationKit.InCallControlButton {
    void /* unknown type, empty encoding */ discSize;
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ controlsManager;
}

- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (id)menuFor:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
