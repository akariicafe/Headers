@class NSSet, NSMutableSet;
@protocol RBSInvalidatable;

@interface RBSStateCaptureSet : NSObject {
    id<RBSInvalidatable> _invalidatable;
    NSMutableSet *_stateCaptureSegments;
}

@property (readonly, copy, nonatomic) NSSet *itemsCopy;

- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
