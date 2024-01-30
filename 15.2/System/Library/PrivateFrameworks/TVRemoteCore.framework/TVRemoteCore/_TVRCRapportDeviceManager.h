@class NSMutableDictionary;

@interface _TVRCRapportDeviceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceRecords;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)removeDevice:(id)a0;
- (id)_identifierForDevice:(id)a0;
- (void)_checkIfDuplicateNameButDifferentIDSIdentifier:(id)a0 device:(id)a1;
- (id)recordForDevice:(id)a0;
- (BOOL)createOrUpdateRecordForDevice:(id)a0;

@end
