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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isWidgetIcon;
- (id)firstWidgetPassingTest:(id /* block */)a0;
- (id)initWithWidget:(id)a0;
- (id)initWithUniqueLeafIdentifier;
- (id)copyWithUniqueLeafIdentifier;
- (id)_fallbackBestDataSource;
- (void)didAddIconDataSource:(id)a0;
- (void)didRemoveIconDataSource:(id)a0;
- (BOOL)_hasDataSourceThatIgnoresAllOtherDataSources;
- (id)initWithWidgets:(id)a0;
- (BOOL)supportsConfiguration;
- (BOOL)isEqual:(id)a0;
- (BOOL)canBeAddedToMultiItemDrag;
- (BOOL)supportsStackConfiguration;
- (BOOL)isWidgetStackIcon;
- (BOOL)canBeReceivedByIcon;
- (BOOL)canReceiveGrabbedIcon;
- (unsigned long long)supportedGridSizeClasses;
- (id)initWithLeafIdentifier:(id)a0 applicationBundleID:(id)a1;
- (id)initWithCHSAvocadoDescriptor:(id)a0;
- (id)initWithCHSAvocadoDescriptors:(id)a0;

@end
