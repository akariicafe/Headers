@class NSURL, NSString;

@interface _PUPosterOverrideConfiguration : NSObject <PUPosterOverrideConfiguration>

@property (readonly, nonatomic) NSURL *assetURL;
@property (readonly, copy, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) BOOL applySmartCrop;
@property (readonly, nonatomic) BOOL includeBackfillLayers;
@property (readonly, nonatomic) BOOL includeInactiveLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0 assetURL:(id)a1 assetIdentifier:(id)a2;

@end
