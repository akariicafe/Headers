@class NSUUID, NSData;

@interface CUTDSDevice : NSObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *bloomFilterData;
@property (copy, nonatomic) NSData *deviceAddress;
@property (nonatomic) unsigned long long lastSeenTicks;
@property (nonatomic) BOOL paired;

- (void).cxx_destruct;
- (id)description;

@end
