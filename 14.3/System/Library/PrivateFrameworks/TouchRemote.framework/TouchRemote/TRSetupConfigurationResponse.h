@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage

@property (nonatomic) BOOL needsNetwork;
@property (copy, nonatomic) NSSet *unauthenticatedAccountServices;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)_stringFromAccountServices:(id)a0;

@end
