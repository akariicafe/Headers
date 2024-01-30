@class NSMutableArray;

@interface OFUIView : OFViewProxy {
    NSMutableArray *_draggingPasteboardTypes;
}

- (void)commonInit;
- (void)dealloc;
- (void)registerDraggingPasteboardType:(id)a0;
- (void)unregisterAllDraggingPasteboardType;
- (id)draggingPasteboardTypes;

@end
