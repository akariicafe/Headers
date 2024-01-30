@class NSArray, NSString, UIActivityViewController;

@interface UIActivityItemsConfiguration : NSObject <UIActivityItemsConfigurationReading> {
    NSArray *_itemProviders;
    NSArray *_activityItems;
    UIActivityViewController *_vc;
    NSArray *_excludedActivityTypes;
}

@property (readonly, nonatomic) BOOL _hasItemsForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *_activityItems;
@property (copy, nonatomic, setter=_setExcludedActivityTypes:) NSArray *_excludedActivityTypes;
@property (copy, nonatomic, setter=_setExcludedInteractions:) NSArray *_excludedInteractions;
@property (retain, nonatomic) id localObject;
@property (copy, nonatomic) NSArray *supportedInteractions;
@property (copy, nonatomic) id /* block */ metadataProvider;
@property (copy, nonatomic) id /* block */ perItemMetadataProvider;
@property (copy, nonatomic) id /* block */ previewProvider;
@property (copy, nonatomic) id /* block */ applicationActivitiesProvider;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_itemsForSystemSharingFromActivityItemsConfiguration:(id)a0 wrapperBlock:(id /* block */)a1;
+ (id)activityItemsConfigurationWithItemProviders:(id)a0;
+ (id)activityItemsConfigurationWithObjects:(id)a0;

- (void)_commonInit;
- (id)initWithObjects:(id)a0;
- (void).cxx_destruct;
- (id)_initWithActivityItemSources:(id)a0;
- (id)_initWithActivityItems:(id)a0 applicationActivities:(id)a1;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)a0 key:(id)a1;
- (id)activityItemsConfigurationMetadataForKey:(id)a0;
- (id)activityItemsConfigurationPreviewForItemAtIndex:(long long)a0 intent:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)activityItemsConfigurationSupportsInteraction:(id)a0;
- (id)activityItemsForSharing;
- (id)initWithItemProviders:(id)a0;
- (id)itemProviders;

@end
