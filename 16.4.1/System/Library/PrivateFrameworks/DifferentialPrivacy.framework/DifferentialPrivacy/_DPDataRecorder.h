@class NSString, NSObject, _DPKeyProperties;

@interface _DPDataRecorder : NSObject <_DPDataRecorder, _DPDataRecorderKeyProperties>

@property (readonly, copy, nonatomic) NSString *keyName;
@property (readonly, nonatomic) _DPKeyProperties *keyProperties;
@property (readonly, nonatomic) NSObject *randomizer;
@property (readonly, nonatomic) double privacyParameter;
@property (readonly, nonatomic) unsigned long long range;
@property (readonly, nonatomic) unsigned long long fragmentWidth;
@property (readonly, nonatomic) unsigned long long fragmentCount;
@property (readonly, nonatomic) BOOL bitStringAlgorithm;
@property (readonly, nonatomic) BOOL directUpload;

- (id)initWithKey:(id)a0;
- (void)recordWords:(id)a0;
- (void)recordNumbers:(id)a0 metadata:(id)a1;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1;
- (void)recordFloatVectors:(id)a0;
- (void)recordStrings:(id)a0;
- (void)recordBitValues:(id)a0;
- (void)recordNumbers:(id)a0;
- (void)recordNumbersVectors:(id)a0;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (void)recordStrings:(id)a0 metadata:(id)a1;
- (id)init;
- (void)recordBitValues:(id)a0 metadata:(id)a1;
- (id)description;
- (void)recordBitVectors:(id)a0;
- (void)recordBitVectors:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;

@end
