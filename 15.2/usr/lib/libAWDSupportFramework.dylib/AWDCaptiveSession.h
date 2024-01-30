@class NSString, NSMutableArray;

@interface AWDCaptiveSession : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char autoLoginType : 1; unsigned char durationNetworkNotCaptive : 1; unsigned char durationOnNetwork : 1; unsigned char passiveCaptivityCorrectDetection : 1; unsigned char passiveCaptivityIncorrectDetection : 1; unsigned char passiveCaptivitySymptom : 1; unsigned char redirectURLType : 1; unsigned char result : 1; unsigned char websheetProbeCount : 1; unsigned char websheetScrapeResult : 1; unsigned char whiteListProbeCompletionTime : 1; unsigned char whiteListProbeStatus : 1; unsigned char autoLoginFailed : 1; unsigned char detectedNotCaptiveHandledByCNP : 1; unsigned char handlerCNPTriggeredLogOff : 1; unsigned char isDetectedCaptive : 1; unsigned char nonCaptiveDetectedAsCaptive : 1; unsigned char passiveCaptivityDetected : 1; unsigned char websheetScraped : 1; unsigned char wisprDetected : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) unsigned int result;
@property (nonatomic) BOOL hasWebsheetProbeCount;
@property (nonatomic) unsigned int websheetProbeCount;
@property (nonatomic) BOOL hasWebsheetScraped;
@property (nonatomic) BOOL websheetScraped;
@property (nonatomic) BOOL hasWebsheetScrapeResult;
@property (nonatomic) unsigned int websheetScrapeResult;
@property (retain, nonatomic) NSMutableArray *installedCNPDisplayIDs;
@property (readonly, nonatomic) BOOL hasHandlerCNP;
@property (retain, nonatomic) NSString *handlerCNP;
@property (nonatomic) BOOL hasDetectedNotCaptiveHandledByCNP;
@property (nonatomic) BOOL detectedNotCaptiveHandledByCNP;
@property (nonatomic) BOOL hasAutoLoginType;
@property (nonatomic) unsigned int autoLoginType;
@property (nonatomic) BOOL hasAutoLoginFailed;
@property (nonatomic) BOOL autoLoginFailed;
@property (readonly, nonatomic) BOOL hasAutoLoginCarrierID;
@property (retain, nonatomic) NSString *autoLoginCarrierID;
@property (nonatomic) BOOL hasWisprDetected;
@property (nonatomic) BOOL wisprDetected;
@property (nonatomic) BOOL hasPassiveCaptivityDetected;
@property (nonatomic) BOOL passiveCaptivityDetected;
@property (nonatomic) BOOL hasPassiveCaptivityCorrectDetection;
@property (nonatomic) unsigned int passiveCaptivityCorrectDetection;
@property (nonatomic) BOOL hasPassiveCaptivityIncorrectDetection;
@property (nonatomic) unsigned int passiveCaptivityIncorrectDetection;
@property (nonatomic) BOOL hasHandlerCNPTriggeredLogOff;
@property (nonatomic) BOOL handlerCNPTriggeredLogOff;
@property (nonatomic) BOOL hasIsDetectedCaptive;
@property (nonatomic) BOOL isDetectedCaptive;
@property (nonatomic) BOOL hasDurationOnNetwork;
@property (nonatomic) unsigned int durationOnNetwork;
@property (nonatomic) BOOL hasDurationNetworkNotCaptive;
@property (nonatomic) unsigned int durationNetworkNotCaptive;
@property (nonatomic) BOOL hasPassiveCaptivitySymptom;
@property (nonatomic) unsigned int passiveCaptivitySymptom;
@property (readonly, nonatomic) BOOL hasAppTriggeredPassiveSymptom;
@property (retain, nonatomic) NSString *appTriggeredPassiveSymptom;
@property (nonatomic) BOOL hasNonCaptiveDetectedAsCaptive;
@property (nonatomic) BOOL nonCaptiveDetectedAsCaptive;
@property (nonatomic) BOOL hasRedirectURLType;
@property (nonatomic) int redirectURLType;
@property (nonatomic) BOOL hasWhiteListProbeStatus;
@property (nonatomic) int whiteListProbeStatus;
@property (nonatomic) BOOL hasWhiteListProbeCompletionTime;
@property (nonatomic) unsigned int whiteListProbeCompletionTime;

+ (Class)installedCNPDisplayIDsType;

- (void)addInstalledCNPDisplayIDs:(id)a0;
- (int)StringAsWhiteListProbeStatus:(id)a0;
- (void)clearInstalledCNPDisplayIDs;
- (id)redirectURLTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsRedirectURLType:(id)a0;
- (id)whiteListProbeStatusAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)installedCNPDisplayIDsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)installedCNPDisplayIDsCount;

@end
