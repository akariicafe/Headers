@interface XRSpaceDataToken : NSObject <NSCopying> {
    id _tag;
    unsigned long long _seq;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSpaceTag:(id)a0 sequenceID:(unsigned long long)a1;

@end
