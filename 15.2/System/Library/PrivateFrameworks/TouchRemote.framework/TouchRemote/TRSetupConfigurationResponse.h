@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage

@property (nonatomic) BOOL needsNetwork;
@property (copy, nonatomic) NSSet *unauthenticatedAccountServices;
@property (nonatomic) BOOL useAIDA;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_stringFromAccountServices:(id)a0;

@end
