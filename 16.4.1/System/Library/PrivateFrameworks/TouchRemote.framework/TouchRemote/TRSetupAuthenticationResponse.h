@class NSSet, NSError;

@interface TRSetupAuthenticationResponse : TRResponseMessage

@property (retain, nonatomic) NSSet *unauthenticatedAccountServices;
@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
