@class _UIDragManager, NSMutableArray;

@interface _UIDraggingImageSlotOwner : NSObject {
    NSMutableArray *_usedSlotIDs;
}

@property (readonly, weak, nonatomic) _UIDragManager *dragManager;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)uploadImage:(struct CGImage { } *)a0;
- (id)initWithDragManager:(id)a0;

@end
