@class NSString, NSDictionary, PXGadgetProvider, PXHorizontalCollectionGadget;

@interface PXHorizontalCollectionGadgetProvider : PXGadgetProvider <PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate> {
    PXHorizontalCollectionGadget *_horizontalGadget;
    BOOL _hasLoaded;
    Class _horizontalCollectionGadgetClass;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long gadgetType;
@property (nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long defaultColumnSpan;
@property (copy, nonatomic) NSDictionary *columnSpanForTraitCollection;
@property (nonatomic) BOOL prefersPagingEnabled;
@property (nonatomic) BOOL isFixedHeight;
@property (readonly, nonatomic) PXGadgetProvider *contentGadgetProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (void).cxx_destruct;
- (void)loadDataForPriority;
- (id)initWithIdentifier:(id)a0;
- (void)invalidateGadgets;
- (void)horizontalCollectionGadgetDatasourceDidUpdate:(id)a0;
- (id)initWithContentGadgetProvider:(id)a0 title:(id)a1 horizontalCollectionGadgetClass:(Class)a2;
- (void)_updateHorizontalGadget;
- (id)_createHorizontalGadget;
- (void)resetPriorityDate;
- (id)initWithContentGadgetProvider:(id)a0 title:(id)a1;
- (void)loadDataForGadgets;

@end
