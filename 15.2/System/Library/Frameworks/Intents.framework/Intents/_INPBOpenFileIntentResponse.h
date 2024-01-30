@class NSArray, _INPBInteger, NSString, _INPBString;

@interface _INPBOpenFileIntentResponse : PBCodable <_INPBOpenFileIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *entities;
@property (readonly, nonatomic) unsigned long long entitiesCount;
@property (retain, nonatomic) _INPBInteger *numResults;
@property (readonly, nonatomic) BOOL hasNumResults;
@property (retain, nonatomic) _INPBString *query;
@property (readonly, nonatomic) BOOL hasQuery;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entitiesType;

- (void)encodeWithCoder:(id)a0;
- (void)clearEntities;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEntities:(id)a0;
- (id)entitiesAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
