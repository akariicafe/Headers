@class NSString;

@interface _TVRCRapportDeviceRecord : NSObject

@property (copy, nonatomic) NSString *ids;
@property (nonatomic) unsigned long long transports;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIDS:(id)a0;
- (BOOL)hasAvailableTransports;

@end
