@class UIImage, NSString;

@interface MFComposeSendAccessoryButton : UIButton <_UICursorInteractionDelegate>

@property (retain, nonatomic) UIImage *sendImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithType:(long long)a0;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void).cxx_destruct;
- (id)_preview;
- (void)_setupSendImage:(BOOL)a0;
- (id)_cursorForTargetedPreview:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
