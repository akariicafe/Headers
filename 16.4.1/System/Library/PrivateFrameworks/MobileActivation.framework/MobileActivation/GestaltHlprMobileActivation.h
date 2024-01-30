@interface GestaltHlprMobileActivation : NSObject

+ (id)getSharedInstance;

- (id)copyAnswer:(struct __CFString { } *)a0;
- (void)addAGestaltKey:(struct __CFString { } *)a0 toDictionary:(id)a1 required:(BOOL)a2 errors:(id)a3;
- (id)copyDeviceInfo:(id *)a0;
- (id)copyDeviceIDInfo:(id *)a0;
- (id)copyRegulatoryImagesInfo:(id *)a0;
- (BOOL)getBoolAnswer:(struct __CFString { } *)a0;
- (void)updateRecertInfo:(id)a0 errors:(id *)a1;

@end
