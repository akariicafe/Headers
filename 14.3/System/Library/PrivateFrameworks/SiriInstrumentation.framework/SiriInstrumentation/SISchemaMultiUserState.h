@class NSArray, NSData;

@interface SISchemaMultiUserState : PBCodable

@property (copy, nonatomic) NSArray *enrolledUsers;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addEnrolledUsers:(id)a0;
- (void)clearEnrolledUsers;
- (unsigned long long)enrolledUsersCount;
- (id)enrolledUsersAtIndex:(unsigned long long)a0;

@end
