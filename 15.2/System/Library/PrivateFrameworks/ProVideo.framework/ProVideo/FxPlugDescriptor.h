@interface FxPlugDescriptor : NSObject {
    struct FxPlugDescriptorPriv { id x0; id x1; } *_priv;
}

+ (id)fxPlugDescriptorWithPROPlugIn:(void *)a0;
+ (id)fxPlugDescriptorWithFxMetaPlug:(id)a0;

- (id)displayName;
- (id)flavor;
- (id)version;
- (id)properties;
- (id)uuid;
- (void)dealloc;
- (Class)plugInClass;
- (id)initWithPROPlugIn:(void *)a0;
- (id)initWithFxMetaPlug:(id)a0;
- (id)plugInTypeUUID;
- (id)metaPlug;
- (id)groupDescriptor;
- (BOOL)canDoGPU;
- (BOOL)requiresCoreImage;

@end
