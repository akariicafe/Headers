@class UPParserModel, UPCalibrationModel, UPPreprocessor;

@interface UPModelBundle : NSObject

@property (readonly, nonatomic) UPPreprocessor *preprocessor;
@property (readonly, nonatomic) UPParserModel *parserModel;
@property (readonly, nonatomic) UPCalibrationModel *calibrationModel;

- (void).cxx_destruct;
- (id)initWithLoadedModelConfiguration:(id)a0 parserModel:(id)a1 calibrationModel:(id)a2;
- (id)initWithPreprocessor:(id)a0 parserModel:(id)a1 calibrationModel:(id)a2;

@end
