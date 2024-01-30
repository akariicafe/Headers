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

- (id)_fallbackBestDataSource;
- (BOOL)isWidgetIcon;
- (BOOL)_hasDataSourceThatIgnoresAllOtherDataSources;
- (BOOL)canBeReceivedByIcon;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithWidgetExtensionIdentifiers:(id)a0 widgetKinds:(id)a1;
- (void)updateLabel;
- (id)copyWithSuggestionSource:(long long)a0;
- (void)addFirstSuggestedWidget;
- (void)removeFirstSuggestedIconDataSource;
- (id)initWithCHSAvocadoDescriptors:(id)a0;
- (BOOL)canReceiveGrabbedIcon;
- (unsigned long long)supportedGridSizeClasses;
- (id)copyWithUniqueLeafIdentifier;
- (id)initWithCHSAvocadoDescriptor:(id)a0;
- (BOOL)supportsStackConfiguration;
- (id)initWithLeafIdentifier:(id)a0 applicationBundleID:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isWidgetStackIcon;
- (id)initWithCHSAvocadoDescriptors:(id)a0 suggestionSource:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWidget:(id)a0;
- (id)firstWidgetPassingTest:(id /* block */)a0;
- (id)initWithWidgets:(id)a0;
- (id)initWithWidgetExtensionIdentifiers:(id)a0 widgetKinds:(id)a1 widgetContainerBundleIdentifers:(id)a2;
- (void)didRemoveIconDataSource:(id)a0;
- (void)didAddIconDataSource:(id)a0;
- (void)addDataSourcesFromWidgetIcons:(id)a0;
- (BOOL)supportsConfiguration;
- (BOOL)canBeAddedToMultiItemDrag;

@end
