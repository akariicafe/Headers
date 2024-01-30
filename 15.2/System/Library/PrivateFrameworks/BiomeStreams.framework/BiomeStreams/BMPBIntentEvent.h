@class NSString, NSData;

@interface BMPBIntentEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char intentHandlingStatus : 1; unsigned char intentType : 1; unsigned char interactionDirection : 1; unsigned char donatedBySiri : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL hasSourceId;
@property (retain, nonatomic) NSString *sourceId;
@property (readonly, nonatomic) BOOL hasIntentClass;
@property (retain, nonatomic) NSString *intentClass;
@property (readonly, nonatomic) BOOL hasIntentVerb;
@property (retain, nonatomic) NSString *intentVerb;
@property (nonatomic) BOOL hasIntentType;
@property (nonatomic) int intentType;
@property (nonatomic) BOOL hasIntentHandlingStatus;
@property (nonatomic) int intentHandlingStatus;
@property (readonly, nonatomic) BOOL hasInteraction;
@property (retain, nonatomic) NSData *interaction;
@property (readonly, nonatomic) BOOL hasItemID;
@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) BOOL hasDonatedBySiri;
@property (nonatomic) BOOL donatedBySiri;
@property (nonatomic) BOOL hasInteractionDirection;
@property (nonatomic) int interactionDirection;

- (int)StringAsInteractionDirection:(id)a0;
- (id)interactionDirectionAsString:(int)a0;
- (int)StringAsIntentHandlingStatus:(id)a0;
- (id)intentTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)intentHandlingStatusAsString:(int)a0;
- (id)dictionaryRepresentation;
- (int)StringAsIntentType:(id)a0;

@end
