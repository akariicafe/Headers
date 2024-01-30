@class NSDictionary, PGManager, NSString;

@interface PGSurveyQuestionFactory : NSObject <PGQuestionFactory>

@property (nonatomic) BOOL ignoreExistingQuestions;
@property (retain, nonatomic) NSDictionary *existingQuestionsByEntityIdentifier;
@property (retain, nonatomic) PGManager *manager;
@property (readonly, nonatomic) long long questionOptions;
@property (readonly, nonatomic) unsigned short questionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (BOOL)questionAlreadyExists:(id)a0;
- (id)existingQuestionsForEntityIdentifier:(id)a0;
- (BOOL)shouldAddQuestion:(id)a0 toAlreadyGeneratedQuestions:(id)a1;
- (id)fetchExistingQuestions;
- (id)_questionsByEntityIdentifierFromQuestions:(id)a0;
- (id)keyAssetFromMomentNode:(id)a0;
- (id)curatedAssetsFromMomentNode:(id)a0;
- (id)assetFromMomentNode:(id)a0 closestToLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 radius:(double)a2;
- (id)_assetFromAssets:(id)a0 closestToLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 radius:(double)a2;
- (id)representativeCuratedAssetsFromMomentNode:(id)a0;

@end
