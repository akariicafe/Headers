@class NSData, NSString;

@interface _INPBIntentResponsePayloadSuccess : PBCodable <_INPBIntentResponsePayloadSuccess, NSSecureCoding, NSCopying> {
    struct { unsigned char shouldOpenContainingApplication : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *responseMessageData;
@property (readonly, nonatomic) BOOL hasResponseMessageData;
@property (copy, nonatomic) NSString *responseTypeName;
@property (readonly, nonatomic) BOOL hasResponseTypeName;
@property (nonatomic) BOOL shouldOpenContainingApplication;
@property (nonatomic) BOOL hasShouldOpenContainingApplication;
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
- (void)encodeWithCoder:(id)a0;

@end
