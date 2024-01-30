@class NSString, NSData, _MRContentItemMetadataProtobuf, NSMutableArray, _MRLyricsItemProtobuf;

@interface _MRContentItemProtobuf : PBCodable <NSCopying> {
    NSString *_ancestorIdentifier;
    NSData *_artworkData;
    int _artworkDataHeight;
    int _artworkDataWidth;
    NSMutableArray *_availableLanguageOptions;
    NSMutableArray *_currentLanguageOptions;
    NSString *_identifier;
    NSString *_info;
    _MRLyricsItemProtobuf *_lyrics;
    _MRContentItemMetadataProtobuf *_metadata;
    NSString *_parentIdentifier;
    NSString *_queueIdentifier;
    NSString *_requestIdentifier;
    NSMutableArray *_sections;
    struct { unsigned char artworkDataHeight : 1; unsigned char artworkDataWidth : 1; } _has;
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
