@class NSString;

@interface HDUserDomainConceptPropertyEntity : HDHealthEntity <HDUserDomainConceptDataEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)indices;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)insertDeviceLocalProperty:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)deleteDataForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)deleteDeviceLocalPropertiesWithType:(long long)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)deviceLocalPropertiesWithUserDomainConceptID:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)insertDataForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)retrieveDataForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)willDeleteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)addPropertyDataToCodable:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;


@end
