@class NSArray, NSString, NSDate;

@interface HDFitnessMachineDataCharacteristicBase : HDHealthServiceCharacteristic <HDDatumRendering, HDHealthServiceCharacteristic>

@property (class, readonly, nonatomic) unsigned char flagFieldLength;

@property (readonly, nonatomic) NSDate *updateTime;
@property (readonly, nonatomic) BOOL elapsedTimeIsSet;
@property (readonly, nonatomic) unsigned short elapsedTime;
@property (readonly, copy, nonatomic) NSArray *allFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uuid;
+ (id)_buildWithBinaryValue:(id)a0 error:(id *)a1;

- (id)generateDatums:(id)a0;
- (id)getBinaryValueWithError:(id *)a0;

@end
