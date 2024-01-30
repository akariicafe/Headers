@class NSError;

@interface TRSetupActivationResponse : TRResponseMessage

@property (nonatomic) BOOL activated;
@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
