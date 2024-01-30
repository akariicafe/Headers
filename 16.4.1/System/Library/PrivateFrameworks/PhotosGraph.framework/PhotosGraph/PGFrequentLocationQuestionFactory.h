@class PHFetchResult;

@interface PGFrequentLocationQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) PHFetchResult *existingFrequentLocationQuestions;

- (void).cxx_destruct;
- (unsigned short)questionType;
- (long long)questionOptions;
- (BOOL)_addIfNeededFrequentLocationQuestionForAsset:(id)a0 withLocationTypeName:(id)a1 toQuestions:(id)a2;
- (BOOL)_distanceTooCloseBetweenCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 otherCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (double)_localFactoryScoreForLocationTypeName:(id)a0;
- (id)_selectedAssetFromMomentNodes:(id)a0 closeToCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
