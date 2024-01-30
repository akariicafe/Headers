@interface FxPlugGroupDescriptor : NSObject {
    struct FxPlugGroupDescriptorPriv { id x0; } *_priv;
}

+ (id)fxPlugGroupDescriptorWithUUID:(id)a0 andDisplayName:(id)a1;

- (id)displayName;
- (BOOL)isEqual:(id)a0;
- (id)uuid;
- (void)dealloc;
- (id)initWithUUID:(id)a0 andDisplayName:(id)a1;

@end
