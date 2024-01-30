@class NSArray;

@interface PXForYouPeopleQuestionsDataSource : NSObject

@property (retain, nonatomic) NSArray *questions;

+ (id)_suggestedNames;
+ (id)_fetchData;

- (id)init;
- (void).cxx_destruct;

@end
