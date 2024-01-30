@interface FigWeakReference : NSObject {
    id _referencedObject;
}

@property (readonly) id referencedObject;

+ (id)weakReferenceToObject:(id)a0;

- (id)retainReferencedObject;
- (id)initWithReferencedObject:(id)a0;
- (void)dealloc;

@end
