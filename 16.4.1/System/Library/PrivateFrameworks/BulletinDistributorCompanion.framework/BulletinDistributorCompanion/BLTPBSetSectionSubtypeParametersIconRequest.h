@class NSString, BLTPBSectionIcon;

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying> {
    struct { unsigned char subtypeID : 1; unsigned char defaultSubtype : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) BOOL hasSubtypeID;
@property (nonatomic) unsigned long long subtypeID;
@property (nonatomic) BOOL hasDefaultSubtype;
@property (nonatomic) BOOL defaultSubtype;
@property (readonly, nonatomic) BOOL hasIcon;
@property (retain, nonatomic) BLTPBSectionIcon *icon;

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

@end
