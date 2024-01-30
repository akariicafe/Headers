@class TRIRolloutDatabase;
@protocol TRIUserCovariateProviding, TRISystemCovariateProviding;

@interface TRIRolloutTargeter : NSObject <TRIRolloutTargeting> {
    TRIRolloutDatabase *_db;
}

@property (readonly, nonatomic) id<TRISystemCovariateProviding> systemCovariateProvider;
@property (readonly, nonatomic) id<TRIUserCovariateProviding> userCovariateProvider;

+ (id)_targetingErrorWithDeployment:(id)a0 errorType:(id)a1 details:(id)a2;
+ (id)targetingErrorWithDeployment:(id)a0 errorType:(id)a1;

- (id)_activeRecordForRolloutId:(id)a0;
- (id)initWithDatabase:(id)a0 systemCovariateProvider:(id)a1 userCovariateProvider:(id)a2;
- (id)init;
- (struct { unsigned char x0; })_targetRollout:(id)a0 factorPackSetId:(id *)a1 relatedRampDeployment:(id *)a2 recurseOnRamp:(BOOL)a3 error:(id *)a4;
- (struct { unsigned char x0; })targetRollout:(id)a0 factorPackSetId:(id *)a1 relatedRampDeployment:(id *)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
