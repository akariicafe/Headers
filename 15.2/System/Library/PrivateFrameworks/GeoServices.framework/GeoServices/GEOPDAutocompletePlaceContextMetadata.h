@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompletePlaceContextMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _clientizationFeatures;
    NSMutableArray *_alternateSearchableNames;
    NSString *_matchedDisplayNameLanguageCode;
    NSString *_matchedDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distanceDisplayThreshold;
    int _requestedShortAddressType;
    BOOL _enableChildPoisWithoutAcRank;
    BOOL _enableLookInsideActionForVenuePois;
    BOOL _isDefaultName;
    BOOL _isLookAroundActionAllowed;
    BOOL _isProminentResult;
    BOOL _shouldEnableCallAction;
    BOOL _shouldEnableWebsiteAction;
    BOOL _shouldSuppressDirectionsAction;
    struct { unsigned char has_distanceDisplayThreshold : 1; unsigned char has_requestedShortAddressType : 1; unsigned char has_enableChildPoisWithoutAcRank : 1; unsigned char has_enableLookInsideActionForVenuePois : 1; unsigned char has_isDefaultName : 1; unsigned char has_isLookAroundActionAllowed : 1; unsigned char has_isProminentResult : 1; unsigned char has_shouldEnableCallAction : 1; unsigned char has_shouldEnableWebsiteAction : 1; unsigned char has_shouldSuppressDirectionsAction : 1; unsigned char read_unknownFields : 1; unsigned char read_clientizationFeatures : 1; unsigned char read_alternateSearchableNames : 1; unsigned char read_matchedDisplayNameLanguageCode : 1; unsigned char read_matchedDisplayName : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
