@class NSString, PBUnknownFields;

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_completion;
    int _tapBehavior;
    BOOL _showIntermediateStateTapBehaviorListView;
    struct { unsigned char has_tapBehavior : 1; unsigned char has_showIntermediateStateTapBehaviorListView : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCompletion;
@property (retain, nonatomic) NSString *completion;
@property (nonatomic) BOOL hasTapBehavior;
@property (nonatomic) int tapBehavior;
@property (nonatomic) BOOL hasShowIntermediateStateTapBehaviorListView;
@property (nonatomic) BOOL showIntermediateStateTapBehaviorListView;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tapBehaviorAsString:(int)a0;
- (int)StringAsTapBehavior:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
