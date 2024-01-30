@class NSArray, NSURL, APOdmlRecipe;

@interface APOdmlEspressoEvaluator : NSObject

@property (readonly, nonatomic) NSArray *trainingRows;
@property (readonly, nonatomic) APOdmlRecipe *recipe;
@property (readonly, nonatomic) NSURL *netURL;
@property (readonly, nonatomic) unsigned long long trainingDataRowCount;

- (void).cxx_destruct;
- (id)evaluate:(id *)a0;
- (id)initWithRows:(id)a0 recipe:(id)a1 netURL:(id)a2;

@end
