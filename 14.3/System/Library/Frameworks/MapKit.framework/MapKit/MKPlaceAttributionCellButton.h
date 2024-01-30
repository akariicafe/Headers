@protocol MKPlaceAttributionCellButtonDelegate;

@interface MKPlaceAttributionCellButton : UIButton {
    BOOL _highlighted;
}

@property (weak, nonatomic) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate;

- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)a0;

@end
