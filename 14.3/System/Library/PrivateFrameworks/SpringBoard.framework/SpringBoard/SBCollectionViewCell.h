@protocol SBCollectionViewCellDelegate;

@interface SBCollectionViewCell : UICollectionViewCell {
    BOOL _performSetHighlighted;
}

@property (weak, nonatomic) id<SBCollectionViewCellDelegate> delegate;
@property (nonatomic) BOOL protectDelayedUnhighlights;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0 afterDelay:(double)a1;
- (void)_performSetHighlighted;
- (void)_didSetHighlighted:(BOOL)a0;

@end
