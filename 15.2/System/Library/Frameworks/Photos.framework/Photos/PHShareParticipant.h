@class NSString, NSPersonNameComponents;

@interface PHShareParticipant : PHObject

@property (readonly, nonatomic) unsigned short role;
@property (readonly, nonatomic) short permission;
@property (readonly, nonatomic) short acceptanceStatus;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, copy, nonatomic) NSString *phoneNumber;

+ (id)fetchType;
+ (id)managedEntityName;
+ (void)queryParticipantsWithEmails:(id)a0 phoneNumbers:(id)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;
+ (id)entityKeyMap;
+ (id)fetchParticipantsInShare:(id)a0 options:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchContributorForAsset:(id)a0 options:(id)a1;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)a0 options:(id)a1;

- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)changeRequestClass;
- (unsigned long long)hash;

@end
