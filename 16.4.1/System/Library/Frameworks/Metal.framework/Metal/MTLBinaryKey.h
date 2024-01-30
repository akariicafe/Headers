@interface MTLBinaryKey : NSObject <NSCopying> {
    struct MTLFunctionId { struct { unsigned char x0[32]; } x0; struct { unsigned char x0[32]; } x1[4]; unsigned int x2; } *_id;
}

@property (readonly) const struct { unsigned char x0[32]; } *value;

- (BOOL)isEqualToKey:(id)a0;
- (id)initWithHash:(const struct MTLMultiHashKey { struct { unsigned char x0[32]; } x0; struct { unsigned char x0[32]; } x1[4]; unsigned int x2; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (const struct MTLFunctionId { struct { unsigned char x0[32]; } x0; struct { unsigned char x0[32]; } x1[4]; unsigned int x2; } *)getFunctionId;

@end
