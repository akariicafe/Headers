@interface SCRCWeakReferenceContainer : NSObject <NSCopying> {
    id _weakReference;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)strongReference;
- (id)autoreleasedReference;

@end
