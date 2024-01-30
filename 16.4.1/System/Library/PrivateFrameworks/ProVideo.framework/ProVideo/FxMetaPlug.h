@interface FxMetaPlug : NSObject <FxMetaPlug> {
    struct FxMetaPlugPriv { id x0; id x1; } *_priv;
}

+ (id)fxMetaPlugWithWrapper:(id)a0 andData:(id)a1;
+ (id)syntheticUUIDBasedOnIndex:(int)a0;
+ (id)syntheticUUIDBasedOnString:(id)a0;

- (id)version;
- (id)displayName;
- (id)data;
- (id)uuid;
- (void)dealloc;
- (id)groupUUID;
- (id)wrapper;
- (id)groupDisplayName;
- (id)fxPlugDescriptor;
- (id)fxPlugProperties;
- (id)initWithWrapper:(id)a0 andData:(id)a1;
- (id)versionDisplayName;

@end
