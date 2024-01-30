@protocol STMenuButtonDelegate;

@interface STMenuButton : UIButton

@property (weak) id<STMenuButtonDelegate> delegate;

- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;

@end
