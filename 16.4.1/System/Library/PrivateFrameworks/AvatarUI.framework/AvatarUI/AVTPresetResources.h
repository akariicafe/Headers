@class AVTPreset, NSString;

@interface AVTPresetResources : NSObject <AVTCacheableResource>

@property (readonly, nonatomic) AVTPreset *preset;
@property (readonly, copy, nonatomic) NSString *presetIdentifier;
@property (readonly, nonatomic) id resources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreset:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresEncryption;
- (unsigned long long)costForScope:(id)a0;
- (id)volatileIdentifierForScope:(id)a0;

@end
