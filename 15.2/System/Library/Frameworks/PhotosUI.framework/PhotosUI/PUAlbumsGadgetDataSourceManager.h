@class NSArray, PUSessionInfo, PXExtendedTraitCollection;

@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager

@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly, nonatomic) NSArray *providers;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)gadgetProviders;
- (void)removeCachedProviders;
- (id)initWithTraitCollection:(id)a0 sessionInfo:(id)a1;

@end
