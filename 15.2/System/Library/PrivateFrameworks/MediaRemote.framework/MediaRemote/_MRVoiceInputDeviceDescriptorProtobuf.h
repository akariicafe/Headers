@class _MRAudioFormatSettingsProtobuf, NSMutableArray;

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    _MRAudioFormatSettingsProtobuf *_defaultFormat;
    NSMutableArray *_supportedFormats;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
