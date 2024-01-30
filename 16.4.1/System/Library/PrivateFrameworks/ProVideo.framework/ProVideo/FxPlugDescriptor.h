@interface FxPlugDescriptor : NSObject {
    struct FxPlugDescriptorPriv { id x0; id x1; } *_priv;
}

+ (id)fxPlugDescriptorWithFxMetaPlug:(id)a0;
+ (id)fxPlugDescriptorWithPROPlugIn:(void *)a0;

- (id)version;
- (id)displayName;
- (id)properties;
- (id)uuid;
- (void)dealloc;
- (id)flavor;
- (id)groupDescriptor;
- (BOOL)canDoGPU;
- (id)initWithFxMetaPlug:(id)a0;
- (id)initWithPROPlugIn:(void *)a0;
- (id)metaPlug;
- (Class)plugInClass;
- (id)plugInTypeUUID;
- (BOOL)requiresCoreImage;

@end
