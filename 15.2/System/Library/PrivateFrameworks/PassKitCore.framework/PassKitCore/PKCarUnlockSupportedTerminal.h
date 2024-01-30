@class NSArray, NSString, NSSet;

@interface PKCarUnlockSupportedTerminal : NSObject

@property (readonly, copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *partnerName;
@property (readonly, copy, nonatomic) NSSet *terminalCriteria;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
