@interface PSWeakReference : NSObject <NSCopying> {
    id _location;
}

+ (id)weakReferenceWithObject:(id)a0;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (id)object;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
