@class NSData, NSString;

@interface CURangingPeer : NSObject

@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSData *deviceIRK;
@property (copy, nonatomic) NSString *deviceModel;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
