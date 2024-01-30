@class NSArray, _INPBCondition, NSString;

@interface _INPBDateTimeRangeList : PBCodable <_INPBDateTimeRangeList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCondition *condition;
@property (readonly, nonatomic) BOOL hasCondition;
@property (copy, nonatomic) NSArray *dateRanges;
@property (readonly, nonatomic) unsigned long long dateRangesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)dateRangeType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)addDateRange:(id)a0;
- (id)dateRangeAtIndex:(unsigned long long)a0;
- (void)clearDateRanges;

@end
