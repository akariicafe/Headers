@class NSString;

@interface NTPBSectionDisplayDescriptor : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasNameColorLight;
@property (retain, nonatomic) NSString *nameColorLight;
@property (readonly, nonatomic) BOOL hasBackgroundGradientColor;
@property (retain, nonatomic) NSString *backgroundGradientColor;
@property (readonly, nonatomic) BOOL hasActionTitle;
@property (retain, nonatomic) NSString *actionTitle;
@property (readonly, nonatomic) BOOL hasActionURLString;
@property (retain, nonatomic) NSString *actionURLString;
@property (readonly, nonatomic) BOOL hasNameColorDark;
@property (retain, nonatomic) NSString *nameColorDark;
@property (readonly, nonatomic) BOOL hasNameActionURLString;
@property (retain, nonatomic) NSString *nameActionURLString;
@property (readonly, nonatomic) BOOL hasBackgroundColorLight;
@property (retain, nonatomic) NSString *backgroundColorLight;
@property (readonly, nonatomic) BOOL hasBackgroundColorDark;
@property (retain, nonatomic) NSString *backgroundColorDark;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
