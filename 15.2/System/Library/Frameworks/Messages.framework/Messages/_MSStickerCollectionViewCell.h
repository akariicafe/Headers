@class CALayer, MSStickerView;
@protocol MSStickerPrivate;

@interface _MSStickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) id<MSStickerPrivate> sticker;
@property (readonly, nonatomic) MSStickerView *stickerView;

- (void)layoutSubviews;
- (void)setAnimating:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)showCellBorder:(BOOL)a0;

@end
