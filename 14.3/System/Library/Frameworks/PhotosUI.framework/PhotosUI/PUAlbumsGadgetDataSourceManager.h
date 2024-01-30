@class NSArray, PUSessionInfo, PXExtendedTraitCollection;

@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager

@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly, nonatomic) NSArray *providers;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;

- (id)gadgetProviders;
- (void).cxx_destruct;
- (id)initWithTraitCollection:(id)a0 sessionInfo:(id)a1;

@end
