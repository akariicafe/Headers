@interface FxMetaPlug : NSObject <FxMetaPlug> {
    struct FxMetaPlugPriv { id x0; id x1; } *_priv;
}

+ (id)syntheticUUIDBasedOnString:(id)a0;
+ (id)fxMetaPlugWithWrapper:(id)a0 andData:(id)a1;
+ (id)syntheticUUIDBasedOnIndex:(int)a0;

- (id)data;
- (void)dealloc;
- (id)uuid;
- (id)version;
- (id)wrapper;
- (id)groupUUID;
- (id)displayName;
- (id)groupDisplayName;
- (id)fxPlugProperties;
- (id)initWithWrapper:(id)a0 andData:(id)a1;
- (id)versionDisplayName;
- (id)fxPlugDescriptor;

@end
