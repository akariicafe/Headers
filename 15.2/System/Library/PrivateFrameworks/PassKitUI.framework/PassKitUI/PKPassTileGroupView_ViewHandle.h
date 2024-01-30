@class PKPassTileView;

@interface PKPassTileGroupView_ViewHandle : NSObject {
    BOOL _initialLayout;
    PKPassTileView *_view;
    struct CGSize { double width; double height; } _size;
}

- (void).cxx_destruct;
- (id)init;

@end
