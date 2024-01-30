@class CALayer, MSStickerView;
@protocol MSStickerPrivate;

@interface _MSStickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) id<MSStickerPrivate> sticker;
@property (readonly, nonatomic) MSStickerView *stickerView;

- (void)setAnimating:(BOOL)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)showCellBorder:(BOOL)a0;

@end
