@class GEOPDResultRefinementMetadata, PBUnknownFields;

@interface GEOPDCandidateFilterReason : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementMetadata *_sortMetadata;
    int _reasonType;
    float _viewportExpansionFactor;
    struct { unsigned char has_reasonType : 1; unsigned char has_viewportExpansionFactor : 1; } _flags;
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
