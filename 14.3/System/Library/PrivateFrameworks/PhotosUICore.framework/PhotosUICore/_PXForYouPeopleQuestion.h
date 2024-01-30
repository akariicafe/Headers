@class PHPerson;

@interface _PXForYouPeopleQuestion : NSObject

@property (readonly, nonatomic) long long questionType;
@property (readonly, nonatomic) PHPerson *targetPerson;

- (void).cxx_destruct;
- (id)initWithQuestionType:(long long)a0 targetPerson:(id)a1;

@end
