@class CHSConfiguredWidgetContainerConsumer, NSString, SBHIconManager;

@interface SBChronoHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver>

@property (readonly, nonatomic) SBHIconManager *iconManager;
@property (readonly, nonatomic) CHSConfiguredWidgetContainerConsumer *chronoConsumer;
@property (nonatomic) unsigned long long widgetDataGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)homeScreenUsageAggregator:(id)a0 didNoteUserDislikedWidgetIconStackSuggestion:(id)a1;
- (id)init;
- (id)initWithIconManager:(id)a0;
- (void).cxx_destruct;
- (void)homeScreenUsageAggregator:(id)a0 didNoteUserTappedWidgetIcon:(id)a1 withURL:(id)a2;
- (void)homeScreenUsageAggregator:(id)a0 didNoteCurrentPageIndexChanged:(unsigned long long)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteWidgetIconRemoved:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteWidgetIconStackChangedActiveWidget:(id)a1;
- (void)_rebuildAndTransmitConfiguredWidgetData:(id)a0;
- (id)_descriptionForArray:(id)a0 name:(id)a1;
- (void)homeScreenUsageAggregator:(id)a0 didNoteWidgetIconAdded:(id)a1;
- (id)_containerDescriptorForWidgetIcon:(id)a0 atLocation:(long long)a1 page:(unsigned long long)a2;

@end
