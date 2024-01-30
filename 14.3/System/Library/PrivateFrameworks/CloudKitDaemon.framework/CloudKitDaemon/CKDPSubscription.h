@class CKDPRecordZoneIdentifier, CKDPSubscriptionNotification, NSMutableArray, CKDPIdentifier;

@interface CKDPSubscription : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _mutationTriggers;
    struct { unsigned char evaluationType : 1; unsigned char owner : 1; unsigned char fireOnce : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPIdentifier *identifier;
@property (nonatomic) BOOL hasEvaluationType;
@property (nonatomic) int evaluationType;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) int owner;
@property (readonly, nonatomic) unsigned long long mutationTriggersCount;
@property (readonly, nonatomic) int *mutationTriggers;
@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) CKDPSubscriptionNotification *notification;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *recordTypes;
@property (nonatomic) BOOL hasFireOnce;
@property (nonatomic) BOOL fireOnce;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (Class)filtersType;
+ (Class)recordTypesType;

- (id)ownerAsString:(int)a0;
- (void)addFilters:(id)a0;
- (id)filtersAtIndex:(unsigned long long)a0;
- (void)addMutationTriggers:(int)a0;
- (unsigned long long)filtersCount;
- (void)clearFilters;
- (int)StringAsOwner:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)evaluationTypeAsString:(int)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)clearMutationTriggers;
- (id)recordTypesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)setMutationTriggers:(int *)a0 count:(unsigned long long)a1;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsEvaluationType:(id)a0;
- (unsigned long long)recordTypesCount;
- (void)clearRecordTypes;
- (int)StringAsMutationTriggers:(id)a0;
- (int)mutationTriggersAtIndex:(unsigned long long)a0;
- (void)addRecordTypes:(id)a0;
- (id)mutationTriggersAsString:(int)a0;

@end
