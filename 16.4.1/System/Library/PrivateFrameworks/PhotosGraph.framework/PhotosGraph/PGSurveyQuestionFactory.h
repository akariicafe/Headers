@class NSArray, NSDictionary, PGManagerWorkingContext, NSString;

@interface PGSurveyQuestionFactory : NSObject <PGQuestionFactory>

@property (nonatomic) BOOL ignoreExistingQuestions;
@property (retain, nonatomic) NSDictionary *existingQuestionsByEntityIdentifier;
@property (readonly, nonatomic) NSArray *collidingQuestionTypes;
@property (readonly) PGManagerWorkingContext *workingContext;
@property (readonly, nonatomic) short questionVersion;
@property (readonly, nonatomic) long long questionOptions;
@property (readonly, nonatomic) unsigned short questionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_assetFromAssets:(id)a0 closestToLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 radius:(double)a2;
- (id)_questionsByEntityIdentifierFromQuestions:(id)a0;
- (id)assetFromMomentNode:(id)a0 closestToLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 radius:(double)a2 curationContext:(id)a3;
- (id)assetsFromMomentNode:(id)a0 curationContext:(id)a1;
- (id)curatedAssetsFromMomentNode:(id)a0 curationContext:(id)a1;
- (id)existingQuestionsForEntityIdentifier:(id)a0;
- (id)fetchExistingQuestions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)initWithWorkingContext:(id)a0 questionVersion:(short)a1;
- (BOOL)questionAlreadyExists:(id)a0;
- (id)representativeAssetsFromMomentNode:(id)a0 curationContext:(id)a1;
- (BOOL)shouldAddQuestion:(id)a0 toAlreadyGeneratedQuestions:(id)a1;

@end
