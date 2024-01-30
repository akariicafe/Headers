@interface TRSetupCompletionRequest : TRRequestMessage

@property (nonatomic) BOOL completedSuccessfully;
@property (nonatomic) long long errorCode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
