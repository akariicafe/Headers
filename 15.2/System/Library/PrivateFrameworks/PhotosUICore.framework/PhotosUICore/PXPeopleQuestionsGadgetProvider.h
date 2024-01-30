@class NSString, PXForYouPeopleQuestionsDataSource;

@interface PXPeopleQuestionsGadgetProvider : PXGadgetProvider

@property (retain, nonatomic) PXForYouPeopleQuestionsDataSource *dataSource;
@property (readonly, copy, nonatomic) NSString *localizedTitle;

+ (id)_gadgetForQuestion:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;

@end
