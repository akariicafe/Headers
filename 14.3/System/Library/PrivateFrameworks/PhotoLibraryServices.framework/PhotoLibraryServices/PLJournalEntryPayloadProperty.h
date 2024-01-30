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
@property (readonly, nonatomic) BOOL isPropertyListSupportedType;

+ (id)payloadPropertyWithKey:(id)a0 andType:(unsigned long long)a1;
+ (id)payloadPropertyForUUID;
+ (id)payloadPropertyWithKey:(id)a0 subRelationshipProperties:(id)a1 isToMany:(BOOL)a2;
+ (id)payloadPropertyWithKey:(id)a0 andType:(unsigned long long)a1 requiresConversion:(BOOL)a2;
+ (id)payloadPropertyWithKey:(id)a0 relatedEntityPropertyNames:(id)a1 shouldPrefetchRelationship:(BOOL)a2;

- (void).cxx_destruct;
- (BOOL)isEqualToKey:(id)a0;
- (id)initWithKey:(id)a0 andType:(unsigned long long)a1 subRelationshipProperties:(id)a2 requiresConversion:(BOOL)a3 relatedEntityPropertyNames:(id)a4 isUUIDKey:(BOOL)a5 isToManySubRelationship:(BOOL)a6 shouldPrefetchRelationship:(BOOL)a7;
- (id)description;

@end
