@class NSArray, PUSessionInfo, NSString, PXExtendedTraitCollection;

@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager <PXChangeObserver>

@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly, nonatomic) NSArray *providers;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeCachedProviders;
- (id)gadgetProviders;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithTraitCollection:(id)a0 sessionInfo:(id)a1;
- (void).cxx_destruct;

@end
