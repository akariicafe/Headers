@class NSString, NSDate, EKPersistentEvent;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (nonatomic) EKPersistentEvent *owner;
@property (copy, nonatomic) NSString *opaqueKey;
@property (copy, nonatomic) NSString *uniqueKey;
@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) BOOL changesAcknowledged;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *extractionGroupIdentifier;

+ (id)relations;
+ (id)suggestedEventInfoWithOpaqueKey:(id)a0 uniqueKey:(id)a1;
+ (Class)meltedClass;

- (id)uniqueKey;
- (id)timestamp;
- (int)entityType;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOwner:(id)a0;
- (id)semanticIdentifier;
- (id)opaqueKey;
- (void)setTimestamp:(id)a0;
- (void)setOpaqueKey:(id)a0;
- (void)setUniqueKey:(id)a0;
- (void)setChangedFields:(unsigned long long)a0;
- (void)setChangesAcknowledged:(BOOL)a0;
- (void)setExtractionGroupIdentifier:(id)a0;
- (unsigned long long)changedFields;
- (id)extractionGroupIdentifier;
- (BOOL)changesAcknowledged;

@end
