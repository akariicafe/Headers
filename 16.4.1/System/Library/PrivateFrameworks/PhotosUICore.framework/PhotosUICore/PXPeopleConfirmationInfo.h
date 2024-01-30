@class NSSet, NSString, PHPerson;

@interface PXPeopleConfirmationInfo : NSObject

@property (readonly, nonatomic) PHPerson *sourcePerson;
@property (readonly, nonatomic) PHPerson *targetPerson;
@property (readonly, nonatomic) NSSet *otherPersons;
@property (readonly, nonatomic) BOOL wasNaming;
@property (readonly, nonatomic) NSString *localizedName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBootstrapContext:(id)a0;
- (id)initWithSourcePerson:(id)a0 targetPerson:(id)a1 confirmedSuggestions:(id)a2;

@end
