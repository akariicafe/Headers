@class NSString, NSObject, _DPKeyProperties;

@interface _DPDataRecorder : NSObject <_DPDataRecorder, _DPDataRecorderKeyProperties>

@property (readonly, copy, nonatomic) NSString *keyName;
@property (readonly, nonatomic) _DPKeyProperties *keyProperties;
@property (readonly, nonatomic) NSObject *randomizer;
@property (readonly, nonatomic) double privacyParameter;
@property (readonly, nonatomic) unsigned long long range;
@property (readonly, nonatomic) unsigned long long fragmentWidth;
@property (readonly, nonatomic) unsigned long long fragmentCount;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithKey:(id)a0;
- (void)recordNumbers:(id)a0;
- (void)recordStrings:(id)a0;
- (void)recordStrings:(id)a0 metadata:(id)a1;
- (void)recordWords:(id)a0;
- (void)recordBitValues:(id)a0;
- (void)recordBitValues:(id)a0 metadata:(id)a1;
- (void)recordBitVectors:(id)a0 metadata:(id)a1;

@end
