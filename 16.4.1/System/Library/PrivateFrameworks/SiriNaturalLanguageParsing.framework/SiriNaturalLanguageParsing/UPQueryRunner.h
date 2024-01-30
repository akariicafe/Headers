@class UPCalibration, NSSet, UPParserModel, UPDialogActConverter, UPContextualizer;

@interface UPQueryRunner : NSObject

@property (readonly, nonatomic) UPCalibration *_calibration;
@property (readonly, nonatomic) UPDialogActConverter *_dialogActConverter;
@property (readonly, nonatomic) UPContextualizer *_contextualizer;
@property (readonly, nonatomic) UPParserModel *coreModel;
@property (readonly, nonatomic) NSSet *domainModelBundles;

- (void).cxx_destruct;
- (id)initWithCoreModel:(id)a0 domainModels:(id)a1;
- (id)combinedResultFromResults:(id)a0;
- (id)dialogActFromQuery:(id)a0;
- (id)initWithCoreModel:(id)a0 domainModelBundles:(id)a1;
- (id)multiTurnPredictionFromQuery:(id)a0 modelIdentifierToDomainResults:(id)a1 dialogAct:(id)a2 error:(id *)a3;
- (id)predictionFromProtobufQuery:(id)a0 error:(id *)a1;
- (id)predictionFromQuery:(id)a0 error:(id *)a1;
- (id)singleTurnPredictionFromDomainResults:(id)a0;

@end
