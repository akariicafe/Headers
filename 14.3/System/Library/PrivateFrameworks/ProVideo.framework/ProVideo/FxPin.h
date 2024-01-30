@interface FxPin : NSObject {
    struct FxPinPriv { id x0; id x1; id x2; id x3; id x4; id x5; int x6; Class x7; } *_priv;
}

- (Class)valueClass;
- (id)stream;
- (void)setUUID:(id)a0;
- (void)setDirection:(int)a0;
- (id)init;
- (id)properties;
- (int)direction;
- (int)index;
- (void)dealloc;
- (void)setDisplayName:(id)a0;
- (void)setValueClass:(Class)a0;
- (id)uuid;
- (id)description;
- (void)setDescription:(id)a0;
- (id)displayName;
- (id)parentPlug;
- (void)setParentPlug:(id)a0;

@end
