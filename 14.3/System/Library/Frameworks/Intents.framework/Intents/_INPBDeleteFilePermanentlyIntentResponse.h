@class NSString;

@interface _INPBDeleteFilePermanentlyIntentResponse : PBCodable <_INPBDeleteFilePermanentlyIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char confirm : 1; unsigned char success : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL confirm;
@property (nonatomic) BOOL hasConfirm;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
