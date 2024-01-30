@class NSString, NSArray, _INPBIntentMetadata;

@interface _INPBGenericIntent : PBCodable <_INPBGenericIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) _INPBIntentMetadata *metadata;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) unsigned long long parametersCount;
@property (copy, nonatomic) NSString *verb;
@property (readonly, nonatomic) BOOL hasVerb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)parametersType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;

@end
