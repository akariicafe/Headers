@protocol UIActivityItemsConfigurationReading;

@interface _UIActivityItemsConfigurationActivityItemProvider : UIActivityItemProvider {
    id<UIActivityItemsConfigurationReading> _activityItemsConfiguration;
    id _item;
    long long _index;
}

- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)_title;
- (id)initWithActivityItemsConfiguration:(id)a0 itemAtIndex:(long long)a1;

@end
