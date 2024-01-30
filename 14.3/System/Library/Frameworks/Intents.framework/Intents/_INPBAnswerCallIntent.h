@class NSString, _INPBIntentMetadata;

@interface _INPBAnswerCallIntent : PBCodable <_INPBAnswerCallIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char audioRoute : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int audioRoute;
@property (nonatomic) BOOL hasAudioRoute;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)audioRouteAsString:(int)a0;
- (int)StringAsAudioRoute:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
