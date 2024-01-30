@class NSString;

@interface NTPBViewInfo : PBCodable <NSCopying> {
    struct { unsigned char viewType : 1; } _has;
}

@property (nonatomic) BOOL hasViewType;
@property (nonatomic) int viewType;
@property (readonly, nonatomic) BOOL hasViewId;
@property (retain, nonatomic) NSString *viewId;

- (id)viewTypeAsString:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (int)StringAsViewType:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
