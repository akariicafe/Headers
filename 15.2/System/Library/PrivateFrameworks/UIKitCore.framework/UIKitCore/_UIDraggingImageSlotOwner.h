@class _UIDragManager, NSMutableArray;

@interface _UIDraggingImageSlotOwner : NSObject {
    NSMutableArray *_usedSlotIDs;
}

@property (readonly, weak, nonatomic) _UIDragManager *dragManager;

- (void).cxx_destruct;
- (id)initWithDragManager:(id)a0;
- (unsigned int)uploadImage:(struct CGImage { } *)a0;
- (void)dealloc;

@end
