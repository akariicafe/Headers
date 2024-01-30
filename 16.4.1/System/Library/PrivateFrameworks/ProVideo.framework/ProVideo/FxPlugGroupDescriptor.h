@interface FxPlugGroupDescriptor : NSObject {
    struct FxPlugGroupDescriptorPriv { id x0; } *_priv;
}

+ (id)fxPlugGroupDescriptorWithUUID:(id)a0 andDisplayName:(id)a1;

- (id)displayName;
- (id)uuid;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 andDisplayName:(id)a1;

@end
