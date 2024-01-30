@protocol NSObject;

@interface MFWeakReferenceHolder : NSObject {
    id<NSObject> _reference;
}

+ (id)weakReferenceWithObject:(id)a0;

- (id)_initWithObject:(id)a0;
- (void)dealloc;
- (id)retainedReference;
- (id)reference;

@end
