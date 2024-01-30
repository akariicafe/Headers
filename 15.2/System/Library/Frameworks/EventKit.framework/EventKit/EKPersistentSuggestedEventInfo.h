@class NSString, NSDate, EKPersistentEvent;

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (nonatomic) EKPersistentEvent *owner;
@property (copy, nonatomic) NSString *opaqueKey;
@property (copy, nonatomic) NSString *uniqueKey;
@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) BOOL changesAcknowledged;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *extractionGroupIdentifier;

+ (Class)meltedClass;
+ (id)relations;
+ (id)suggestedEventInfoWithOpaqueKey:(id)a0 uniqueKey:(id)a1;

- (int)entityType;
- (void)setOwner:(id)a0;
- (void)setOpaqueKey:(id)a0;
- (void)setUniqueKey:(id)a0;
- (void)setChangedFields:(unsigned long long)a0;
- (void)setChangesAcknowledged:(BOOL)a0;
- (void)setExtractionGroupIdentifier:(id)a0;
- (id)extractionGroupIdentifier;
- (unsigned long long)changedFields;
- (BOOL)changesAcknowledged;
- (void)setTimestampAsDate:(id)a0;
- (id)timestampAsDate;
- (id)uniqueKey;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)opaqueKey;
- (id)semanticIdentifier;

@end
