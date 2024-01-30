@class _MRAudioFormatSettingsProtobuf, NSMutableArray;

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    _MRAudioFormatSettingsProtobuf *_defaultFormat;
    NSMutableArray *_supportedFormats;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
