@interface MTLBinaryKey : NSObject <NSCopying> {
    struct { unsigned char key[32]; } _hash;
}

@property (readonly) const struct { unsigned char x0[32]; } *value;

- (BOOL)isEqualToKey:(id)a0;
- (id)initWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
