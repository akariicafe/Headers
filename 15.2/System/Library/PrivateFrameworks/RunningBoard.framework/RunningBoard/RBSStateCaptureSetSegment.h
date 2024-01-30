@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSetSegment : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_items;
}

@property (readonly, nonatomic) NSSet *items;

- (id)_stateCapture;
- (void)removeItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addItem:(id)a0 withLength:(unsigned long long)a1;
- (unsigned long long)count;
- (void)dealloc;
- (BOOL)containsItem:(id)a0;

@end
