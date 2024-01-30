@interface MTLBinaryKey : NSObject <NSCopying> {
    struct { unsigned char key[32]; } _hash;
}

@property (readonly) const struct { unsigned char x0[32]; } *value;

- (id)initWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToKey:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
