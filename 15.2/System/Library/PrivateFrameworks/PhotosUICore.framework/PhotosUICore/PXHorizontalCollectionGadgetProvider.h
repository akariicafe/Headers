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

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)invalidateGadgets;
- (void)loadDataForPriority;
- (void)resetPriorityDate;
- (id)initWithIdentifier:(id)a0 contentGadgetProvider:(id)a1 title:(id)a2 horizontalCollectionGadgetClass:(Class)a3;
- (id)initWithContentGadgetProvider:(id)a0 title:(id)a1;
- (void)horizontalCollectionGadgetDatasourceDidUpdate:(id)a0;
- (id)initWithContentGadgetProvider:(id)a0 title:(id)a1 horizontalCollectionGadgetClass:(Class)a2;
- (void)_updateHorizontalGadget;
- (id)_createHorizontalGadget;

@end
