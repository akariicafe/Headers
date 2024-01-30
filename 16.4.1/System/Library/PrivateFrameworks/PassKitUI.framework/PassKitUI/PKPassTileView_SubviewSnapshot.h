@class UIView;

@interface PKPassTileView_SubviewSnapshot : NSObject {
    UIView *_snapshot;
    long long _type;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _alignmentRectInsets;
    struct { struct UIEdgeInsets { double top; double left; double bottom; double right; } margins; double innerHorizontalMargin; double innerVerticalMargin; BOOL cornerSpinner; } _state;
}

- (id)init;
- (void).cxx_destruct;

@end
