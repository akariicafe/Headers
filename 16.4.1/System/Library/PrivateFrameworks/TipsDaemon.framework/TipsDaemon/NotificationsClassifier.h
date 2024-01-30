@class MLModel;

@interface NotificationsClassifier : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFrom_0:(double)a0 _1:(double)a1 _2:(double)a2 _3:(double)a3 _4:(double)a4 _5:(double)a5 _6:(double)a6 _7:(double)a7 _8:(double)a8 _9:(double)a9 _10:(double)a10 _11:(double)a11 _12:(double)a12 _13:(double)a13 _14:(double)a14 _15:(double)a15 _16:(double)a16 _17:(double)a17 _18:(double)a18 _19:(double)a19 _20:(double)a20 _21:(double)a21 _22:(double)a22 _23:(double)a23 _24:(double)a24 _25:(double)a25 _26:(double)a26 _27:(double)a27 _28:(double)a28 _29:(double)a29 _30:(double)a30 _31:(double)a31 _32:(double)a32 _33:(double)a33 _34:(double)a34 error:(id *)a35;

@end
