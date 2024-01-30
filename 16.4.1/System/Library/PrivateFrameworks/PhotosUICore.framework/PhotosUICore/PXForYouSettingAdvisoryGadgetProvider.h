@class NSDate;

@interface PXForYouSettingAdvisoryGadgetProvider : PXGadgetProvider <PXForYouRankable>

@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (void)loadDataForGadgets;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;

@end
