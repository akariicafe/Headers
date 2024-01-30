@interface TRSetupCompletionRequest : TRRequestMessage

@property (nonatomic) BOOL completedSuccessfully;
@property (nonatomic) long long errorCode;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
