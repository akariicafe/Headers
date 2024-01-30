@class NSArray, SBHWidget;
@protocol SBLeafIconDataSource;

@interface SBWidgetIcon : SBLeafIcon

@property (retain, nonatomic) SBHWidget *activeWidget;
@property (readonly, copy, nonatomic) NSArray *widgets;
@property (retain, nonatomic) id<SBLeafIconDataSource> lastUserSelectedDataSource;
@property (nonatomic) unsigned long long stackChangeReason;
@property (readonly, nonatomic) unsigned long long iconDataSourcesExcludingSuggestionsCount;
@property (nonatomic) BOOL allowsSuggestions;
@property (nonatomic) BOOL allowsExternalSuggestions;
@property (readonly, nonatomic) SBHWidget *firstSuggestedWidget;
@property (readonly, nonatomic) id<SBLeafIconDataSource> firstSuggestedIconDataSource;

- (BOOL)isWidgetIcon;
- (BOOL)canBeAddedToMultiItemDrag;
- (BOOL)supportsStackConfiguration;
- (BOOL)canReceiveGrabbedIcon;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithWidget:(id)a0;
- (id)copyWithSuggestionSource:(long long)a0;
- (BOOL)canBeReceivedByIcon;
- (id)initWithLeafIdentifier:(id)a0 applicationBundleID:(id)a1;
- (void)updateLabel;
- (BOOL)_hasDataSourceThatIgnoresAllOtherDataSources;
- (BOOL)isWidgetStackIcon;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)didRemoveIconDataSource:(id)a0;
- (id)initWithWidgetExtensionIdentifiers:(id)a0 widgetKinds:(id)a1 widgetContainerBundleIdentifiers:(id)a2;
- (unsigned long long)supportedGridSizeClasses;
- (id)_fallbackBestDataSource;
- (id)initWithCHSWidgetDescriptors:(id)a0;
- (id)firstWidgetPassingTest:(id /* block */)a0;
- (void)removeFirstSuggestedIconDataSource;
- (id)initWithCHSWidgetDescriptors:(id)a0 suggestionSource:(long long)a1;
- (id)initWithWidgetExtensionIdentifiers:(id)a0 widgetKinds:(id)a1;
- (BOOL)supportsConfiguration;
- (void)didAddIconDataSource:(id)a0;
- (void)addDataSourcesFromWidgetIcons:(id)a0;
- (id)initWithCHSWidgetDescriptor:(id)a0;
- (id)initWithWidgetExtensionIdentifiers:(id)a0 widgetKinds:(id)a1 widgetContainerBundleIdentifiers:(id)a2 suggestionSource:(long long)a3;
- (id)copyWithUniqueLeafIdentifier;
- (id)initWithWidgets:(id)a0;
- (void).cxx_destruct;
- (void)addFirstSuggestedWidget;

@end
