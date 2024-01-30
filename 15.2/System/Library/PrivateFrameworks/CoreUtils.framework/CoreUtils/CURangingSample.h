@class NSData, NSString;

@interface CURangingSample : NSObject

@property (nonatomic) int channel;
@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) int rawRSSI;

- (id)description;
- (void).cxx_destruct;

@end
