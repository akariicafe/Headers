@interface FigWeakReference : NSObject {
    id _referencedObject;
}

@property (readonly) id referencedObject;

+ (id)weakReferenceToObject:(id)a0;

- (id)initWithReferencedObject:(id)a0;
- (void)dealloc;
- (id)retainReferencedObject;

@end
