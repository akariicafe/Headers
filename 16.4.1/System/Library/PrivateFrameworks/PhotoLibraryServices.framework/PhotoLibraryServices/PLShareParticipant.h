@class PLPerson, NSString, NSSet, NSPersonNameComponents, PLShare;

@interface PLShareParticipant : PLManagedObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *userIdentifier;
@property (nonatomic) long long role;
@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) long long permission;
@property (nonatomic) short exitState;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) PLPerson *person;
@property (copy, nonatomic) NSString *participantID;
@property (retain, nonatomic) PLShare *share;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *assetBeingTrashedByParticipant;

+ (id)entityName;
+ (id)insertInPhotoLibrary:(id)a0;
+ (id)participantsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)_shareParticipantsWithPredicate:(id)a0 fetchLimit:(unsigned long long)a1 inManagedObjectContext:(id)a2;
+ (BOOL)isCurrentUserInScopeChange:(id)a0;
+ (id)participantWithCPLShareParticipant:(id)a0 inShare:(id)a1;
+ (id)participantWithPLShareParticipant:(id)a0;
+ (id)participantsWithScope:(id)a0 inPhotoLibrary:(id)a1;
+ (id)participantsWithUserIdentifiers:(id)a0 inScope:(id)a1 inPhotoLibrary:(id)a2;

- (id)shortName;
- (void)willSave;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (id)description;
- (BOOL)_relationshipInInvalidState;
- (BOOL)_validateRelationshipConstraintForInsert:(BOOL)a0 error:(id *)a1;
- (void)updateWithCPLShareParticipant:(id)a0 inShare:(id)a1;

@end
