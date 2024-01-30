@class NSString, NSArray;

@interface PKAuxiliaryCapabilityUnregisteredRequirements : NSObject

@property (readonly, nonatomic) NSString *dpanIdentifier;
@property (readonly, nonatomic) NSArray *requirementIdentifiers;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
