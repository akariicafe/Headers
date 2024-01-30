@class EKEvent;

@interface EKEventDetailCell : EKUITableViewCell {
    EKEvent *_event;
    BOOL _editable;
    double _lastLaidOutWidth;
    int _lastLaidOutPosition;
}

@property (readonly, nonatomic) BOOL isEditable;

+ (double)detailsPostLabelSpace;
+ (double)detailsTopVerticalInset;
+ (double)detailsBottomVerticalInset;
+ (double)detailsCellDefaultHeight;
+ (id)_bodyFontAtDefaultSize;
+ (double)_scaledDistanceCalculatedFromTopFromBaseline:(double)a0;
+ (double)_scaledDistanceCalculatedFromBottomToBaseline:(double)a0;

- (void)layoutMarginsDidChange;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 style:(long long)a2;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (BOOL)update;
- (void)setEvent:(id)a0;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (double)detailsLeftInset;
- (BOOL)needsLayoutForWidth:(double)a0 position:(int)a1;
- (double)detailsRightInset;

@end
