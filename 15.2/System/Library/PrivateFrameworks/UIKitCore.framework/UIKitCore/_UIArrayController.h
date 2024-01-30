@class NSOrderedSet, NSArray, NSPredicate, NSOperationQueue;
@protocol _UIArrayControllerDelegate;

@interface _UIArrayController : NSObject {
    BOOL _firstUpdateSent;
    BOOL _invalidated;
}

@property (weak, nonatomic) id<_UIArrayControllerDelegate> delegate;
@property (copy, nonatomic) NSOrderedSet *lastSnapshot;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (id)initWithDelegate:(id)a0;
- (void)processUpdate:(id)a0 changedObjects:(id)a1;
- (BOOL)objectAttributeModified:(id)a0 newObject:(id)a1;
- (id)_computeUpdatesFromOld:(id)a0 toNew:(id)a1 changedItems:(id)a2;
- (void)callUpdateHandler:(id)a0 changeDictionary:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
