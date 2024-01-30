@class NSString;

@interface GEOPDSearchRewrittenQueryNonPayloadField : PBCodable <NSCopying> {
    NSString *_rewrittenQuery;
    int _pipelineType;
    BOOL _hasCamelCase;
    BOOL _hasDirectionsIntent;
    BOOL _hasEmojiRewrite;
    BOOL _hasNumericSplit;
    BOOL _hasSynonymCounterpart;
    struct { unsigned char has_pipelineType : 1; unsigned char has_hasCamelCase : 1; unsigned char has_hasDirectionsIntent : 1; unsigned char has_hasEmojiRewrite : 1; unsigned char has_hasNumericSplit : 1; unsigned char has_hasSynonymCounterpart : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
