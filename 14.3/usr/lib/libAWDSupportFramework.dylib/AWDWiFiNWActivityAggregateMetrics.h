@interface AWDWiFiNWActivityAggregateMetrics : PBCodable <NSCopying> {
    struct { unsigned char kCtlTxRTS : 1; unsigned char kMACRxDataFrameMatchingRA : 1; unsigned char kMACRxDataFrameOtherRA : 1; unsigned char kRxBadFCS : 1; unsigned char kRxBadPLCP : 1; unsigned char kRxCRCGlitch : 1; unsigned char kRxDataErrors : 1; unsigned char kRxFrames : 1; unsigned char kRxGoodPLCP : 1; unsigned char kRxRetryBitSet : 1; unsigned char kTxFrames : 1; unsigned char kTxRetransmission : 1; unsigned char kdot11MultipleRetryCount : 1; unsigned char kdot11RTSFailureCount : 1; unsigned char kdot11RTSSuccessCount : 1; unsigned char kdot11RetryCount : 1; unsigned char kMACRxControlFrameMatchingRA : 1; unsigned char kMACRxControlFrameOtherRA : 1; } _has;
}

@property (nonatomic) BOOL hasKRxDataErrors;
@property (nonatomic) unsigned long long kRxDataErrors;
@property (nonatomic) BOOL hasKRxFrames;
@property (nonatomic) unsigned long long kRxFrames;
@property (nonatomic) BOOL hasKRxRetryBitSet;
@property (nonatomic) unsigned long long kRxRetryBitSet;
@property (nonatomic) BOOL hasKMACRxDataFrameMatchingRA;
@property (nonatomic) unsigned long long kMACRxDataFrameMatchingRA;
@property (nonatomic) BOOL hasKMACRxDataFrameOtherRA;
@property (nonatomic) unsigned long long kMACRxDataFrameOtherRA;
@property (nonatomic) BOOL hasKMACRxControlFrameMatchingRA;
@property (nonatomic) unsigned int kMACRxControlFrameMatchingRA;
@property (nonatomic) BOOL hasKMACRxControlFrameOtherRA;
@property (nonatomic) unsigned int kMACRxControlFrameOtherRA;
@property (nonatomic) BOOL hasKRxGoodPLCP;
@property (nonatomic) unsigned long long kRxGoodPLCP;
@property (nonatomic) BOOL hasKRxBadPLCP;
@property (nonatomic) unsigned long long kRxBadPLCP;
@property (nonatomic) BOOL hasKRxBadFCS;
@property (nonatomic) unsigned long long kRxBadFCS;
@property (nonatomic) BOOL hasKTxFrames;
@property (nonatomic) unsigned long long kTxFrames;
@property (nonatomic) BOOL hasKTxRetransmission;
@property (nonatomic) unsigned long long kTxRetransmission;
@property (nonatomic) BOOL hasKdot11RetryCount;
@property (nonatomic) unsigned long long kdot11RetryCount;
@property (nonatomic) BOOL hasKdot11MultipleRetryCount;
@property (nonatomic) unsigned long long kdot11MultipleRetryCount;
@property (nonatomic) BOOL hasKdot11RTSSuccessCount;
@property (nonatomic) unsigned long long kdot11RTSSuccessCount;
@property (nonatomic) BOOL hasKdot11RTSFailureCount;
@property (nonatomic) unsigned long long kdot11RTSFailureCount;
@property (nonatomic) BOOL hasKCtlTxRTS;
@property (nonatomic) unsigned long long kCtlTxRTS;
@property (nonatomic) BOOL hasKRxCRCGlitch;
@property (nonatomic) unsigned long long kRxCRCGlitch;

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
