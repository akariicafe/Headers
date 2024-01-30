@class NSArray, NSMutableArray, PBUnknownFields;
@protocol GEOSurchargeType;

@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_requestOptions;
    int _optionUsed;
    struct { unsigned char has_optionUsed : 1; } _flags;
}

@property (readonly, nonatomic) NSArray *surchargeTypes;
@property (readonly, nonatomic) unsigned long long selectedSurchargeTypeIndex;
@property (readonly, nonatomic) id<GEOSurchargeType> selectedSurchargeType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
