@class NSString;

@interface IDSCTPNRInfo : NSObject

@property (retain, nonatomic) NSString *PLMN;
@property (retain, nonatomic) NSString *IMSI;
@property (retain, nonatomic) NSString *PNRPhoneNumber;
@property (retain, nonatomic) NSString *phoneBookNumber;

- (id)initWithIMSI:(id)a0 PLMN:(id)a1 PNRPhoneNumber:(id)a2 phoneBookNumber:(id)a3;
- (void).cxx_destruct;

@end
