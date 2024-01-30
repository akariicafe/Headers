@class NSString;
@protocol AVTMSStickerViewDelegate, AVTStickerDisclosureValidationDelegate;

@interface AVTMSStickerView : MSStickerView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL allowsPeel;
@property (weak, nonatomic) id<AVTMSStickerViewDelegate> delegate;
@property (weak, nonatomic) id<AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_prepareForReuse;
- (void)handleLongPress:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;

@end
