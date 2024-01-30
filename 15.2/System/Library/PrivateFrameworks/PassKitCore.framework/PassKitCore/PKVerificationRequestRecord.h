@class PKVerificationChannel, NSString, NSArray, NSDictionary, NSDate;

@interface PKVerificationRequestRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *currentStepIdentifier;
@property (copy, nonatomic) NSString *previousStepIdentifier;
@property (nonatomic) long long verificationStatus;
@property (copy, nonatomic) NSString *passUniqueID;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) PKVerificationChannel *channel;
@property (copy, nonatomic) NSArray *allChannels;
@property (copy, nonatomic) NSDictionary *requiredFieldData;

+ (id)verificationRequestRecordForPass:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)requiredVerificationFields;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
