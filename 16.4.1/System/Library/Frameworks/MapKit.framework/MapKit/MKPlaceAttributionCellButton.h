@protocol MKPlaceAttributionCellButtonDelegate;

@interface MKPlaceAttributionCellButton : UIButton {
    BOOL _highlighted;
}

@property (weak, nonatomic) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate;

- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
