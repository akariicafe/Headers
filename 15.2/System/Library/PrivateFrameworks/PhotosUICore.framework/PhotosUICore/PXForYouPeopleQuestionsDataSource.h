@class NSArray;

@interface PXForYouPeopleQuestionsDataSource : NSObject

@property (retain, nonatomic) NSArray *questions;

+ (id)_fetchData;
+ (id)_suggestedNames;

- (void).cxx_destruct;
- (id)init;

@end
