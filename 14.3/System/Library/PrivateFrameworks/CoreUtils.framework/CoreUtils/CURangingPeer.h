@class NSData, NSString;

@interface CURangingPeer : NSObject

@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSData *deviceIRK;
@property (copy, nonatomic) NSString *deviceModel;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
