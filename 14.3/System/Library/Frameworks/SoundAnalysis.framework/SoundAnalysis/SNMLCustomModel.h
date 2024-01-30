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

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithMLCustomModel:(id)a0 modelDescription:(id)a1;

@end
