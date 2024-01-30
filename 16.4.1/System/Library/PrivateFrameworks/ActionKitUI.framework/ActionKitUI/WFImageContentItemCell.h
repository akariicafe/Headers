@class NSArray, NSMapTable, NSMutableArray;
@protocol WFImageContentItemCellDelegate;

@interface WFImageContentItemCell : UITableViewCell {
    NSMapTable *_activityIndicators;
    NSMutableArray *_imageViews;
    NSMutableArray *_selectedImageViews;
}

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) id<WFImageContentItemCellDelegate> delegate;

- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)imageViewTapped:(id)a0;
- (void)setSelected:(BOOL)a0 atIndex:(unsigned long long)a1;

@end
