@class NSString, NSData;

@interface SYChange : PBCodable <SYChange, NSCopying>

@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *objectId;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL hasChangeData;
@property (retain, nonatomic) NSData *changeData;
@property (readonly, nonatomic) BOOL hasSequencer;
@property (retain, nonatomic) NSString *sequencer;

+ (id)changeWithObject:(id)a0 updateType:(int)a1 store:(id)a2;
+ (id)changeWithChangeObject:(id)a0 serializer:(id)a1 encodeUsingVersion:(long long)a2;
+ (id)changeWithChangeObject:(id)a0 serializer:(id)a1;

- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;
- (id)changeObjectWithSerializer:(id)a0 encodedByVersion:(long long)a1;
- (id)changeObjectWithSerializer:(id)a0;
- (id)objectForStore:(id)a0;

@end
