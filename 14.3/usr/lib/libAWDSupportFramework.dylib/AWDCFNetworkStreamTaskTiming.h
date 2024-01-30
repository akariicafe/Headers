@class NSString;

@interface AWDCFNetworkStreamTaskTiming : PBCodable <NSCopying> {
    struct { unsigned char connectEnd : 1; unsigned char connectStart : 1; unsigned char connected : 1; unsigned char connectionInit : 1; unsigned char domainLookupEnd : 1; unsigned char domainLookupStart : 1; unsigned char firstRead : 1; unsigned char firstWrite : 1; unsigned char isCellular : 1; unsigned char resumeStart : 1; unsigned char secureConnectionStart : 1; unsigned char taskCreationStart : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTaskCreationStart;
@property (nonatomic) unsigned long long taskCreationStart;
@property (nonatomic) BOOL hasResumeStart;
@property (nonatomic) unsigned long long resumeStart;
@property (nonatomic) BOOL hasConnectionInit;
@property (nonatomic) unsigned long long connectionInit;
@property (nonatomic) BOOL hasDomainLookupStart;
@property (nonatomic) unsigned long long domainLookupStart;
@property (nonatomic) BOOL hasDomainLookupEnd;
@property (nonatomic) unsigned long long domainLookupEnd;
@property (nonatomic) BOOL hasConnectStart;
@property (nonatomic) unsigned long long connectStart;
@property (nonatomic) BOOL hasSecureConnectionStart;
@property (nonatomic) unsigned long long secureConnectionStart;
@property (nonatomic) BOOL hasConnectEnd;
@property (nonatomic) unsigned long long connectEnd;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) unsigned long long connected;
@property (nonatomic) BOOL hasFirstWrite;
@property (nonatomic) unsigned long long firstWrite;
@property (nonatomic) BOOL hasFirstRead;
@property (nonatomic) unsigned long long firstRead;
@property (nonatomic) BOOL hasIsCellular;
@property (nonatomic) long long isCellular;
@property (readonly, nonatomic) BOOL hasProcname;
@property (retain, nonatomic) NSString *procname;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
