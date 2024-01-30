@class NSString, PXForYouPeopleQuestionsDataSource;

@interface PXPeopleQuestionsGadgetProvider : PXGadgetProvider

@property (retain, nonatomic) PXForYouPeopleQuestionsDataSource *dataSource;
@property (readonly, copy, nonatomic) NSString *localizedTitle;

+ (id)_gadgetForQuestion:(id)a0;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (void).cxx_destruct;

@end
