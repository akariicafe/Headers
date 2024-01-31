@class NSString, CKShareMetadata;

@interface CKInitiateParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSString *address;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
