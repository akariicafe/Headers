@class NSData, NSString;

@interface ADUserTransparencyRequest : PBRequest <NSCopying> {
    struct { unsigned char isSignedInToiTunes : 1; unsigned char limitAdTracking : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (readonly, nonatomic) BOOL hasContentiAdID;
@property (retain, nonatomic) NSData *contentiAdID;
@property (readonly, nonatomic) BOOL hasITunesStore;
@property (retain, nonatomic) NSString *iTunesStore;
@property (nonatomic) BOOL hasLimitAdTracking;
@property (nonatomic) BOOL limitAdTracking;
@property (nonatomic) BOOL hasIsSignedInToiTunes;
@property (nonatomic) BOOL isSignedInToiTunes;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
