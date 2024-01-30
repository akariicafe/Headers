@interface HUSceneTileCell : HUTileCell {
    void /* unknown type, empty encoding */ _executeActionSetFuture;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ executeActionSetFuture;
@property (nonatomic) BOOL rearranging;
@property (nonatomic) BOOL reorderable;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isRearranging;
- (id)tappableAreaForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
