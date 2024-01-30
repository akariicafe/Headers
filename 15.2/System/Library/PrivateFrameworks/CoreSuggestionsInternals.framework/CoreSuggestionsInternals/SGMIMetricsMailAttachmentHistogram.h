@interface SGMIMetricsMailAttachmentHistogram : PBCodable <NSCopying> {
    struct { unsigned char category : 1; unsigned char count128KBTo512KB : 1; unsigned char count32KBTo128KB : 1; unsigned char count512KBTo2MB : 1; unsigned char count8KBTo32KB : 1; unsigned char countOver2MB : 1; unsigned char countUpTo8KB : 1; } _has;
}

@property (nonatomic) BOOL hasCategory;
@property (nonatomic) int category;
@property (nonatomic) BOOL hasCountUpTo8KB;
@property (nonatomic) unsigned int countUpTo8KB;
@property (nonatomic) BOOL hasCount8KBTo32KB;
@property (nonatomic) unsigned int count8KBTo32KB;
@property (nonatomic) BOOL hasCount32KBTo128KB;
@property (nonatomic) unsigned int count32KBTo128KB;
@property (nonatomic) BOOL hasCount128KBTo512KB;
@property (nonatomic) unsigned int count128KBTo512KB;
@property (nonatomic) BOOL hasCount512KBTo2MB;
@property (nonatomic) unsigned int count512KBTo2MB;
@property (nonatomic) BOOL hasCountOver2MB;
@property (nonatomic) unsigned int countOver2MB;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsCategory:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
