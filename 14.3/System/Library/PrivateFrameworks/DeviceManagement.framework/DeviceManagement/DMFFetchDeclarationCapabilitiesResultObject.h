@class NSArray;

@interface DMFFetchDeclarationCapabilitiesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSArray *supportedAssets;
@property (copy, nonatomic) NSArray *supportedConfigurations;
@property (copy, nonatomic) NSArray *supportedEvents;
@property (copy, nonatomic) NSArray *supportedActivations;
@property (copy, nonatomic) NSArray *supportedPredicates;
@property (copy, nonatomic) NSArray *supportedMessages;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
