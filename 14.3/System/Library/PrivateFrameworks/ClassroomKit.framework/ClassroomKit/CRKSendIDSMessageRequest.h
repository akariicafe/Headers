@class NSString, NSDictionary;

@interface CRKSendIDSMessageRequest : CATTaskRequest

@property (copy, nonatomic) NSString *sourceAppleID;
@property (copy, nonatomic) NSString *destinationAddress;
@property (copy, nonatomic) NSDictionary *message;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
