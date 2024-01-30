@class NSString;

@interface CKInlineStickerBalloonView : CKImageBalloonView

@property (retain, nonatomic) NSString *stickerAccessibilityDescription;

- (void)clearFilters;
- (void)setHasTail:(BOOL)a0;
- (void)addFilter:(id)a0;
- (void)setCanUseOpaqueMask:(BOOL)a0;
- (void)setTailMask:(id)a0;
- (void)setOutlineMask:(id)a0;
- (void)configureForMessagePart:(id)a0;

@end
