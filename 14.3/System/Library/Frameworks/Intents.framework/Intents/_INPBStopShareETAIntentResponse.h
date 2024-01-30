@class NSArray, NSString;

@interface _INPBStopShareETAIntentResponse : PBCodable <_INPBStopShareETAIntentResponse, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _mediums;
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int *mediums;
@property (readonly, nonatomic) unsigned long long mediumsCount;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)recipientType;

- (void)addRecipient:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)addMedium:(int)a0;
- (int)mediumAtIndex:(unsigned long long)a0;
- (void)clearMediums;
- (void)setMediums:(int *)a0 count:(unsigned long long)a1;
- (id)mediumsAsString:(int)a0;
- (int)StringAsMediums:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)recipientAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearRecipients;
- (void)encodeWithCoder:(id)a0;

@end
