@class NSCountedSet;

@interface _UIObjectReferenceCounter : NSObject {
    NSCountedSet *_objectReferences;
}

- (void)decrementReferenceForObject:(id)a0 invalidationHandler:(id /* block */)a1;
- (id)allObjects;
- (id)init;
- (void)incrementReferenceForObject:(id)a0;
- (void).cxx_destruct;

@end
