@interface FxPin : NSObject {
    struct FxPinPriv { id x0; id x1; id x2; id x3; id x4; id x5; int x6; Class x7; } *_priv;
}

- (id)displayName;
- (id)stream;
- (int)index;
- (void)setDirection:(int)a0;
- (Class)valueClass;
- (id)description;
- (id)properties;
- (id)init;
- (id)uuid;
- (int)direction;
- (void)setValueClass:(Class)a0;
- (void)dealloc;
- (void)setDisplayName:(id)a0;
- (void)setUUID:(id)a0;
- (void)setDescription:(id)a0;
- (id)parentPlug;
- (void)setParentPlug:(id)a0;

@end
