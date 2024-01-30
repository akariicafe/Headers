@class NSString;

@interface _INPBIntentResponsePayloadFailure : PBCodable <_INPBIntentResponsePayloadFailure, NSSecureCoding, NSCopying> {
    struct { unsigned char appLaunchRequested : 1; unsigned char errorCode : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL appLaunchRequested;
@property (nonatomic) BOOL hasAppLaunchRequested;
@property (copy, nonatomic) NSString *enumTypeName;
@property (readonly, nonatomic) BOOL hasEnumTypeName;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
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
