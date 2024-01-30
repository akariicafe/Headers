@class NSArray, NSSet;

@interface EKParticipantToContactMatcher : NSObject

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSSet *contactEmailAddresses;
@property (retain, nonatomic) NSSet *contactNameComponents;
@property (retain, nonatomic) NSSet *contactCompanyNames;

+ (id)_allParticipantsOnItem:(id)a0;
+ (id)_nameComponentsForContact:(id)a0 reverse:(BOOL)a1;
+ (id)_nameComponentsWithGivenName:(id)a0 familyName:(id)a1;

- (void).cxx_destruct;
- (id)initWithContacts:(id)a0;
- (void)_cacheContactData;
- (BOOL)anyContactMatchesAnyParticipant:(id)a0;
- (BOOL)anyContactMatchesAnyParticipantFromItem:(id)a0;
- (BOOL)anyContactMatchesParticipant:(id)a0;
- (id)matchingParticipantsFromItem:(id)a0;
- (id)matchingParticipantsFromParticipants:(id)a0;

@end
