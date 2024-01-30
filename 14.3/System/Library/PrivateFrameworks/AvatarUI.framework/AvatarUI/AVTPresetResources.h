@class AVTPreset, NSString;

@interface AVTPresetResources : NSObject <AVTCacheableResource>

@property (readonly, nonatomic) AVTPreset *preset;
@property (readonly, copy, nonatomic) NSString *presetIdentifier;
@property (readonly, nonatomic) id resources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)volatileIdentifierForScope:(id)a0;
- (unsigned long long)costForScope:(id)a0;
- (id)initWithPreset:(id)a0;
- (BOOL)requiresEncryption;

@end
