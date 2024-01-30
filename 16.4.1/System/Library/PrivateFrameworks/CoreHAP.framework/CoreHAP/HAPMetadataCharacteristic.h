@class NSString, NSNumber, HAPMetadataCharacteristicValue;

@interface HAPMetadataCharacteristic : HMFObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *chrDescription;
@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSNumber *properties;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSString *units;
@property (retain, nonatomic) HAPMetadataCharacteristicValue *valueMetadata;

- (void)dump;
- (id)initWithName:(id)a0 uuid:(id)a1 description:(id)a2 format:(id)a3 properties:(id)a4;
- (id)generateDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
