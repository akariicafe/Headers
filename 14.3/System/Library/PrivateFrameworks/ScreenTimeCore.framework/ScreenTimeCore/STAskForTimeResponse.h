@class NSUUID, NSDictionary, NSDate, NSNumber;

@interface STAskForTimeResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *associatedRequestIdentifier;
@property (nonatomic) long long answer;
@property (retain, nonatomic) NSNumber *respondingUserDSID;
@property (retain, nonatomic) NSNumber *amountGranted;
@property (retain, nonatomic) NSDate *timeStamp;
@property (readonly, copy, nonatomic) NSDictionary *payload;

- (id)initWithPayload:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
