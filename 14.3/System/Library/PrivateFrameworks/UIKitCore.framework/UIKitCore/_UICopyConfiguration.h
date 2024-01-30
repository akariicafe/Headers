@class NSArray, NSString;

@interface _UICopyConfiguration : NSObject <_UICopyConfigurationReading> {
    NSArray *_itemProviders;
}

@property (retain, nonatomic) id localObject;
@property (nonatomic) BOOL allowsSharing;
@property (copy, nonatomic) id /* block */ metadataProvider;
@property (copy, nonatomic) id /* block */ previewProvider;
@property (copy, nonatomic) id /* block */ activityItemsProvider;
@property (copy, nonatomic) id /* block */ applicationActivitiesProvider;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForSharing;
@property (readonly, copy, nonatomic) NSArray *activityItemsForSharing;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForSharing;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyConfigurationWithSharedObjects:(id)a0;
+ (id)copyConfigurationWithItemProviders:(id)a0;

- (void).cxx_destruct;
- (id)initWithSharedObjects:(id)a0;
- (id)sharingMetadataForKey:(id)a0;
- (id)previewForSharedItemProviderAtIndex:(long long)a0 intent:(id)a1;
- (id)itemProviders;
- (id)initWithItemProviders:(id)a0;

@end
