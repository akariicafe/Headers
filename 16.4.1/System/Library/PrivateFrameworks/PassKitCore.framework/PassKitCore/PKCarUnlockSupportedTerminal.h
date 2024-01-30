@class NSArray, NSString, NSSet;

@interface PKCarUnlockSupportedTerminal : NSObject

@property (readonly, copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *partnerName;
@property (readonly, copy, nonatomic) NSString *manufacturerIdentifier;
@property (readonly, copy, nonatomic) NSSet *terminalCriteria;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
