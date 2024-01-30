@class LPLinkMetadata;
@protocol UIActivityItemsConfigurationReading;

@interface _UIActivityItemsConfigurationActivityItemProvider : UIActivityItemProvider {
    id<UIActivityItemsConfigurationReading> _activityItemsConfiguration;
    id _item;
    LPLinkMetadata *_linkMetadata;
    long long _sourceIndex;
}

- (id)_title;
- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithActivityItemsConfiguration:(id)a0 itemAtSourceIndex:(long long)a1;

@end
