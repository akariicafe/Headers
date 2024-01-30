@class NSSet, NSError;

@interface TRSetupAuthenticationResponse : TRResponseMessage

@property (retain, nonatomic) NSSet *unauthenticatedAccountServices;
@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
