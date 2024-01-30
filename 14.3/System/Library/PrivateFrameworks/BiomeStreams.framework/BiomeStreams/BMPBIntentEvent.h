@class NSString, NSData;

@interface BMPBIntentEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char intentHandlingStatus : 1; unsigned char intentType : 1; } _has;
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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)intentTypeAsString:(int)a0;
- (int)StringAsIntentType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)intentHandlingStatusAsString:(int)a0;
- (int)StringAsIntentHandlingStatus:(id)a0;

@end
