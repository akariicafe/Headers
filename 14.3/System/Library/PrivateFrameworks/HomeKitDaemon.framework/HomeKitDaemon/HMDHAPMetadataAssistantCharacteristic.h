@class NSString, NSDictionary;

@interface HMDHAPMetadataAssistantCharacteristic : HMFObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *readHAPCharacteristicName;
@property (retain, nonatomic) NSString *writeHAPCharacteristicName;
@property (retain, nonatomic) NSString *format;
@property (nonatomic) BOOL supportsLocalization;
@property (retain, nonatomic) NSDictionary *values;
@property (retain, nonatomic) NSDictionary *outValues;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 readHAPCharacteristic:(id)a1 writeHAPCharacteristic:(id)a2 format:(id)a3;

@end
