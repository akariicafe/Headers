@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSet : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_stateCaptureSegments;
}

@property (readonly, copy, nonatomic) NSSet *itemsCopy;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
