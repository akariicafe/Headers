@class NSString;

@interface MADImageSafetyClassificationRequest : MADRequest

@property (copy, nonatomic) NSString *stagedText;
@property (copy, nonatomic) NSString *conversationIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
