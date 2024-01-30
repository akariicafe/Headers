@class NSString;

@interface VCMediaNegotiationBlobV2GeneralInfo : PBCodable <NSCopying> {
    struct { unsigned char ntpTime : 1; unsigned char abSwitches : 1; unsigned char screenRes : 1; } _has;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } screenResolution;
@property (readonly, nonatomic) union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; } creationTime;
@property (nonatomic) BOOL hasNtpTime;
@property (nonatomic) unsigned long long ntpTime;
@property (readonly, nonatomic) BOOL hasCname;
@property (retain, nonatomic) NSString *cname;
@property (nonatomic) BOOL hasAbSwitches;
@property (nonatomic) unsigned int abSwitches;
@property (nonatomic) BOOL hasScreenRes;
@property (nonatomic) unsigned int screenRes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithCreationTime:(union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 screenResolution:(struct CGSize { double x0; double x1; })a1 abSwitches:(unsigned int)a2;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1;

@end
