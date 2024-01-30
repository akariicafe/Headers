@class NSString, _INPBIntentMetadata;

@interface _INPBDeleteEventIntent : PBCodable <_INPBDeleteEventIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char deleteAllOccurrences : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL deleteAllOccurrences;
@property (nonatomic) BOOL hasDeleteAllOccurrences;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSString *targetEventIdentifier;
@property (readonly, nonatomic) BOOL hasTargetEventIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;

@end
