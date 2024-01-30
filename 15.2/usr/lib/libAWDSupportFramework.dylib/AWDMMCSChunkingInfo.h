@class NSString, NSMutableArray;

@interface AWDMMCSChunkingInfo : PBCodable <NSCopying> {
    struct { unsigned char byteCount : 1; unsigned char chunkCount : 1; unsigned char duration : 1; unsigned char startTime : 1; unsigned char errorCode : 1; unsigned char cancelled : 1; } _has;
}

@property (nonatomic) BOOL hasChunkCount;
@property (nonatomic) long long chunkCount;
@property (nonatomic) BOOL hasByteCount;
@property (nonatomic) long long byteCount;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) long long duration;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL cancelled;
@property (retain, nonatomic) NSMutableArray *chunkingErrors;

+ (Class)chunkingErrorType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addChunkingError:(id)a0;
- (unsigned long long)chunkingErrorsCount;
- (void)clearChunkingErrors;
- (id)chunkingErrorAtIndex:(unsigned long long)a0;

@end
