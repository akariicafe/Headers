@class NSString, NSArray, NSDate;

@interface AKDeviceListDeltaMessagePayload : NSObject

@property (readonly, copy) NSString *altDSID;
@property (readonly) unsigned long long operation;
@property (readonly, copy) NSString *machineID;
@property (readonly, copy) NSArray *machineIDs;
@property (readonly, copy) NSString *serialNumber;
@property (readonly, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (unsigned long long)_convertOperationToEnum:(id)a0;
- (id)initWithResponseBody:(id)a0;

@end
