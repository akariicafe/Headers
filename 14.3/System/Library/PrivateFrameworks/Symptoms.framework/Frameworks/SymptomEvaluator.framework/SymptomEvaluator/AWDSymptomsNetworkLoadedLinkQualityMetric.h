@class NSString;

@interface AWDSymptomsNetworkLoadedLinkQualityMetric : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char dataStalls : 1; unsigned char lQM : 1; unsigned char lastReportedRSSI : 1; unsigned char loadedLQM : 1; unsigned char networkType : 1; unsigned char isLowInternetDL : 1; unsigned char isLowInternetUL : 1; unsigned char isNetworkReliable : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (readonly, nonatomic) BOOL hasNetworkAttachmentLabel;
@property (retain, nonatomic) NSString *networkAttachmentLabel;
@property (nonatomic) BOOL hasLoadedLQM;
@property (nonatomic) int loadedLQM;
@property (nonatomic) BOOL hasLQM;
@property (nonatomic) int lQM;
@property (readonly, nonatomic) BOOL hasRadioAccessTechnology;
@property (retain, nonatomic) NSString *radioAccessTechnology;
@property (nonatomic) BOOL hasIsNetworkReliable;
@property (nonatomic) BOOL isNetworkReliable;
@property (nonatomic) BOOL hasDataStalls;
@property (nonatomic) unsigned int dataStalls;
@property (nonatomic) BOOL hasLastReportedRSSI;
@property (nonatomic) int lastReportedRSSI;
@property (nonatomic) BOOL hasIsLowInternetUL;
@property (nonatomic) BOOL isLowInternetUL;
@property (nonatomic) BOOL hasIsLowInternetDL;
@property (nonatomic) BOOL isLowInternetDL;

- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
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
