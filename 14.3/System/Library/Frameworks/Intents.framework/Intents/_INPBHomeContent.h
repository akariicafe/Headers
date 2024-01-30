@class NSArray, NSString, _INPBHomeFilter;

@interface _INPBHomeContent : PBCodable <_INPBHomeContent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) unsigned long long actionsCount;
@property (retain, nonatomic) _INPBHomeFilter *filter;
@property (readonly, nonatomic) BOOL hasFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)actionsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addActions:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearActions;
- (id)actionsAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
