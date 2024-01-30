@interface FxPin : NSObject {
    struct FxPinPriv { id x0; id x1; id x2; id x3; id x4; id x5; int x6; Class x7; } *_priv;
}

- (int)direction;
- (void)setDirection:(int)a0;
- (id)displayName;
- (id)properties;
- (int)index;
- (id)uuid;
- (void)dealloc;
- (void)setUUID:(id)a0;
- (id)stream;
- (id)init;
- (Class)valueClass;
- (id)description;
- (void)setDisplayName:(id)a0;
- (void)setValueClass:(Class)a0;
- (void)setDescription:(id)a0;
- (id)parentPlug;
- (void)setParentPlug:(id)a0;

@end
