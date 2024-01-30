@class NSArray, NSString, NSSet;

@interface PKCarUnlockSupportedTerminal : NSObject

@property (readonly, copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *partnerName;
@property (readonly, copy, nonatomic) NSSet *terminalCriteria;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
