@class OFUIWindow, NSMutableDictionary, UIPasteboard, UIView, NSMutableArray, UILabel;
@protocol OFUIWindowDraggingSource, OFUIWindowDraggingDestination;

@interface OFUIWindowDraggingSession : NSObject {
    UIView *_badgeView;
    UILabel *_badgeLabel;
    NSMutableDictionary *_pasteboardCache;
}

@property (nonatomic) OFUIWindow *window;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) id<OFUIWindowDraggingSource> source;
@property (retain, nonatomic) id<OFUIWindowDraggingDestination> destination;
@property (nonatomic) unsigned long long sourceOperation;
@property (nonatomic) unsigned long long destinationOperation;
@property (nonatomic) unsigned long long state;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (retain, nonatomic) UIPasteboard *pasteboard;
@property (nonatomic) unsigned long long animation;
@property (nonatomic) unsigned long long formation;
@property (nonatomic) BOOL showBadge;
@property (nonatomic) BOOL delayUpdates;
@property (retain, nonatomic) UIView *presentationView;
@property (nonatomic) struct CGSize { double width; double height; } presentationViewSize;

- (void)addItem:(id)a0;
- (unsigned long long)numberOfItems;
- (id)init;
- (void)_updateBadge;
- (BOOL)isDragging;
- (void)dealloc;
- (unsigned long long)indexOfItem:(id)a0;
- (void)moveToPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithWindow:(id)a0 items:(id)a1 position:(struct CGPoint { double x0; double x1; })a2 source:(id)a3;
- (void)beginDragging;
- (void)endDragging:(BOOL)a0;
- (void)updatePresentationViewOrientation:(id)a0;
- (void)_updateView:(id)a0 orientation:(long long)a1 animated:(BOOL)a2;
- (id)_hitDestinationInSuperview:(id)a0;
- (void)updateDragging;
- (void)_updatePresentationViewWithCompletion:(id /* block */)a0;
- (BOOL)itemsContainObject:(id)a0;
- (void)_updateDraggingInSameWindow;
- (id)_hitDestinationInView:(id)a0;
- (void)_finishPresentationViewWithCompletion:(id /* block */)a0;
- (id)objectsForPasteboardType:(id)a0 transcodeBlock:(id /* block */)a1 cache:(BOOL)a2;

@end
