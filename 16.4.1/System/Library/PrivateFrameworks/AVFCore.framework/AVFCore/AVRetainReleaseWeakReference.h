@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference {
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)initWithReferencedObject:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)referencedObject;

@end
