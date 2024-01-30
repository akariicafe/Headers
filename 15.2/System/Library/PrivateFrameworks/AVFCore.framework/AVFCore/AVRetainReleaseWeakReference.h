@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)description;
- (id)initWithReferencedObject:(id)a0;
- (id)init;
- (id)referencedObject;
- (void)dealloc;

@end
