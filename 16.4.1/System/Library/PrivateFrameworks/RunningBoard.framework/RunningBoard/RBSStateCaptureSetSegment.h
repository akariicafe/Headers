@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *items;

- (void)removeItem:(id)a0;
- (BOOL)containsItem:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)_stateCapture;
- (id)init;
- (void)addItem:(id)a0 withLength:(unsigned long long)a1;
- (void).cxx_destruct;

@end
