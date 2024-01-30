@class EKEvent;

@interface EKEventDetailCell : UITableViewCell {
    EKEvent *_event;
    BOOL _editable;
    double _lastLaidOutWidth;
    int _lastLaidOutPosition;
}

@property (readonly, nonatomic) BOOL isEditable;

+ (double)detailsCellDefaultHeight;
+ (id)_bodyFontAtDefaultSize;
+ (double)_scaledDistanceCalculatedFromTopFromBaseline:(double)a0;
+ (double)_scaledDistanceCalculatedFromBottomToBaseline:(double)a0;
+ (double)detailsPostLabelSpace;
+ (double)detailsTopVerticalInset;
+ (double)detailsBottomVerticalInset;

- (void)layoutMarginsDidChange;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)setEvent:(id)a0;
- (BOOL)update;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (BOOL)needsLayoutForWidth:(double)a0 position:(int)a1;
- (double)detailsRightInset;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 style:(long long)a2;
- (double)detailsLeftInset;

@end
