@class NSString, UARPiCloudAccessoryRecord, CHIPAccessoryFirmwareRecord, NSMutableArray;

@interface UARPiCloudAccessory : NSObject <NSCopying>

@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (readonly) NSString *firmwareVersion;
@property BOOL signatureValidationNeeded;
@property (copy) NSMutableArray *availableRecords;
@property (retain) UARPiCloudAccessoryRecord *record;
@property (retain) CHIPAccessoryFirmwareRecord *chipFirmwareRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2;

@end
