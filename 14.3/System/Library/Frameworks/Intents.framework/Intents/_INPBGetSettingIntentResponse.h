@class NSString, NSArray;

@interface _INPBGetSettingIntentResponse : PBCodable <_INPBGetSettingIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (copy, nonatomic) NSArray *settingResponseDatas;
@property (readonly, nonatomic) unsigned long long settingResponseDatasCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)settingResponseDataType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSettingResponseDatas;
- (void)addSettingResponseData:(id)a0;
- (id)settingResponseDataAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
