@class NSString, MLModelDescription;
@protocol MLCustomModel;

@interface SNMLCustomModel : NSObject <SNMLModel> {
    id<MLCustomModel> _customModel;
}

@property (readonly) MLModelDescription *modelDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
