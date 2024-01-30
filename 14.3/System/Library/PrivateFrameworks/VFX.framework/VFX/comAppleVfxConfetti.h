@class NSNumber, NSDictionary;

@interface comAppleVfxConfetti : VFX.VFXScene

@property (class, nonatomic, readonly) NSNumber *vfxToolVersion;
@property (class, nonatomic, readonly) NSDictionary *scriptTable_1000;

+ (id)loadSceneAndReturnError:(id *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOf:(id)a0 error:(id *)a1;

@end
