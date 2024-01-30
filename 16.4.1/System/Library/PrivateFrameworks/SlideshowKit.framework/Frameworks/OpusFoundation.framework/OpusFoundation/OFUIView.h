@class NSMutableArray;

@interface OFUIView : OFViewProxy {
    NSMutableArray *_draggingPasteboardTypes;
}

- (void)commonInit;
- (void)dealloc;
- (void)registerDraggingPasteboardType:(id)a0;
- (id)draggingPasteboardTypes;
- (void)unregisterAllDraggingPasteboardType;

@end
