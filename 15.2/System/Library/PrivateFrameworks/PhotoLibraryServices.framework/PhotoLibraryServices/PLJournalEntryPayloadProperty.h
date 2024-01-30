@class NSString, NSSet, NSDictionary;

@interface PLJournalEntryPayloadProperty : NSObject {
    BOOL _requiresConversion;
}

@property (retain, nonatomic) PLJournalEntryPayloadProperty *parentProperty;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL requiresConversion;
@property (readonly, nonatomic) BOOL isUUIDKey;
@property (readonly, nonatomic) NSSet *relatedEntityPropertyNames;
@property (readonly, nonatomic) NSDictionary *subRelationshipProperties;
@property (readonly, nonatomic) BOOL shouldPrefetchRelationship;
@property (readonly, nonatomic) BOOL isToManySubRelationship;
@property (readonly, nonatomic) NSString *subRelationshipEntityName;

+ (id)payloadPropertyWithKey:(id)a0 relatedEntityPropertyNames:(id)a1 shouldPrefetchRelationship:(BOOL)a2;
+ (id)payloadPropertyForUUID;
+ (id)payloadPropertyWithKey:(id)a0 andType:(unsigned long long)a1 requiresConversion:(BOOL)a2;
+ (id)payloadPropertyWithKey:(id)a0 andType:(unsigned long long)a1;
+ (id)payloadPropertyWithKey:(id)a0 subRelationshipProperties:(id)a1 subRelationshipEntityName:(id)a2 isToMany:(BOOL)a3;

- (BOOL)isEqualToKey:(id)a0;
- (id)description;
- (id)initWithKey:(id)a0 andType:(unsigned long long)a1 subRelationshipProperties:(id)a2 subRelationshipEntityName:(id)a3 requiresConversion:(BOOL)a4 relatedEntityPropertyNames:(id)a5 isUUIDKey:(BOOL)a6 isToManySubRelationship:(BOOL)a7 shouldPrefetchRelationship:(BOOL)a8;
- (void).cxx_destruct;

@end
