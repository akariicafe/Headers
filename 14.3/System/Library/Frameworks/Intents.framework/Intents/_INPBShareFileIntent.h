@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBShareFileIntent : PBCodable <_INPBShareFileIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char shareMode : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *entityNames;
@property (readonly, nonatomic) unsigned long long entityNamesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (nonatomic) BOOL hasShareMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)recipientsType;
+ (Class)entityNameType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearRecipients;
- (void)addRecipients:(id)a0;
- (id)recipientsAtIndex:(unsigned long long)a0;
- (id)shareModeAsString:(int)a0;
- (int)StringAsShareMode:(id)a0;
- (void)addEntityName:(id)a0;
- (void)clearEntityNames;
- (id)entityNameAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
