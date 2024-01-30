@class NSString, NSArray, NSDate;

@interface AKDeviceListDeltaMessagePayload : NSObject

@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, copy, nonatomic) NSString *machineID;
@property (readonly, copy, nonatomic) NSArray *machineIDs;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSDate *timestamp;

- (void).cxx_destruct;
- (unsigned long long)_convertOperationToEnum:(id)a0;
- (id)initWithResponseBody:(id)a0;

@end
