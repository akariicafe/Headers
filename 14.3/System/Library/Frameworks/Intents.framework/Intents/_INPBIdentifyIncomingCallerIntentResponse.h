@class NSArray, NSString;

@interface _INPBIdentifyIncomingCallerIntentResponse : PBCodable <_INPBIdentifyIncomingCallerIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char statusCode : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *callRecords;
@property (readonly, nonatomic) unsigned long long callRecordsCount;
@property (nonatomic) int statusCode;
@property (nonatomic) BOOL hasStatusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)callRecordsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearCallRecords;
- (void)addCallRecords:(id)a0;
- (id)callRecordsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)statusCodeAsString:(int)a0;
- (int)StringAsStatusCode:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
