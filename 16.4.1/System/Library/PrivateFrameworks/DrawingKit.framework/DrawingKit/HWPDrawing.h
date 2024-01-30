@class NSData, PBUnknownFields;

@interface HWPDrawing : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char compressionAlgorithm : 1; unsigned char decompressedLength : 1; unsigned char strokeDataFieldCount : 1; unsigned char strokesCount : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasEncodedCanvasSize;
@property (retain, nonatomic) NSData *encodedCanvasSize;
@property (readonly, nonatomic) BOOL hasEncodedStrokesFrame;
@property (retain, nonatomic) NSData *encodedStrokesFrame;
@property (nonatomic) BOOL hasStrokesCount;
@property (nonatomic) unsigned int strokesCount;
@property (nonatomic) BOOL hasCompressionAlgorithm;
@property (nonatomic) int compressionAlgorithm;
@property (nonatomic) BOOL hasDecompressedLength;
@property (nonatomic) unsigned int decompressedLength;
@property (nonatomic) BOOL hasStrokeDataFieldCount;
@property (nonatomic) unsigned int strokeDataFieldCount;
@property (readonly, nonatomic) BOOL hasStrokes;
@property (retain, nonatomic) NSData *strokes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsCompressionAlgorithm:(id)a0;
- (id)compressionAlgorithmAsString:(int)a0;

@end
