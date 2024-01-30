@class NSData, _INPBURLValue, NSString;

@interface _INPBFile : PBCodable <_INPBFile, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) _INPBURLValue *fileURL;
@property (readonly, nonatomic) BOOL hasFileURL;
@property (copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) BOOL hasFilename;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) BOOL hasTypeIdentifier;
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
