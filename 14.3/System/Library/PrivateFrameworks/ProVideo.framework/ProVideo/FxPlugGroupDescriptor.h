@interface FxPlugGroupDescriptor : NSObject {
    struct FxPlugGroupDescriptorPriv { id x0; } *_priv;
}

+ (id)fxPlugGroupDescriptorWithUUID:(id)a0 andDisplayName:(id)a1;

- (void)dealloc;
- (id)uuid;
- (BOOL)isEqual:(id)a0;
- (id)displayName;
- (id)initWithUUID:(id)a0 andDisplayName:(id)a1;

@end
