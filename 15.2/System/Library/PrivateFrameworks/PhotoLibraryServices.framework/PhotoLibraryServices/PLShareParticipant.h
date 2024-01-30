@class NSString, NSPersonNameComponents, PLShare;

@interface PLShareParticipant : PLManagedObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *userIdentifier;
@property (nonatomic) long long role;
@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) long long permission;
@property (nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) PLShare *share;

+ (id)entityName;
+ (id)participantsWithUserIdentifiers:(id)a0 inScope:(id)a1 inPhotoLibrary:(id)a2;
+ (id)_shareParticipantsWithPredicate:(id)a0 fetchLimit:(unsigned long long)a1 inManagedObjectContext:(id)a2;
+ (id)participantsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)updateOrInsertWithCPLShareParticipant:(id)a0 inShare:(id)a1;
+ (id)insertInPhotoLibrary:(id)a0;

- (id)description;

@end
