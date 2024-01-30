@class NSString, NSMutableArray;

@interface AWDMMCSGetRequestInfo : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char localBytes : 1; unsigned char resumedBytes : 1; unsigned char startTime : 1; unsigned char timestamp : 1; unsigned char cancelledErrorCode : 1; unsigned char itemCount : 1; unsigned char itemCountFailed : 1; unsigned char itemCountSuccessful : 1; unsigned char itemsNeedingChunks : 1; unsigned char requestErrorCode : 1; unsigned char allItemsFailed : 1; unsigned char allItemsSuccessful : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) long long timestamp;
@property (readonly, nonatomic) BOOL hasClientId;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) long long duration;
@property (readonly, nonatomic) BOOL hasCancelledErrorDomain;
@property (retain, nonatomic) NSString *cancelledErrorDomain;
@property (nonatomic) BOOL hasCancelledErrorCode;
@property (nonatomic) int cancelledErrorCode;
@property (readonly, nonatomic) BOOL hasRequestErrorDomain;
@property (retain, nonatomic) NSString *requestErrorDomain;
@property (nonatomic) BOOL hasRequestErrorCode;
@property (nonatomic) int requestErrorCode;
@property (nonatomic) BOOL hasItemCount;
@property (nonatomic) int itemCount;
@property (nonatomic) BOOL hasItemsNeedingChunks;
@property (nonatomic) int itemsNeedingChunks;
@property (nonatomic) BOOL hasLocalBytes;
@property (nonatomic) long long localBytes;
@property (nonatomic) BOOL hasResumedBytes;
@property (nonatomic) long long resumedBytes;
@property (retain, nonatomic) NSMutableArray *authHttpInfos;
@property (retain, nonatomic) NSMutableArray *containerHttpInfos;
@property (retain, nonatomic) NSMutableArray *completeHttpInfos;
@property (retain, nonatomic) NSMutableArray *cancelErrors;
@property (retain, nonatomic) NSMutableArray *errors;
@property (nonatomic) BOOL hasAllItemsSuccessful;
@property (nonatomic) BOOL allItemsSuccessful;
@property (nonatomic) BOOL hasItemCountSuccessful;
@property (nonatomic) unsigned int itemCountSuccessful;
@property (nonatomic) BOOL hasAllItemsFailed;
@property (nonatomic) BOOL allItemsFailed;
@property (nonatomic) BOOL hasItemCountFailed;
@property (nonatomic) unsigned int itemCountFailed;
@property (readonly, nonatomic) BOOL hasCkContainerId;
@property (retain, nonatomic) NSString *ckContainerId;

+ (Class)errorType;
+ (Class)authHttpInfosType;
+ (Class)containerHttpInfosType;
+ (Class)completeHttpInfosType;
+ (Class)cancelErrorType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)errorsCount;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearErrors;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addError:(id)a0;
- (void)addAuthHttpInfos:(id)a0;
- (void)addContainerHttpInfos:(id)a0;
- (void)addCompleteHttpInfos:(id)a0;
- (void)addCancelError:(id)a0;
- (unsigned long long)authHttpInfosCount;
- (void)clearAuthHttpInfos;
- (id)authHttpInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)containerHttpInfosCount;
- (void)clearContainerHttpInfos;
- (id)containerHttpInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)completeHttpInfosCount;
- (void)clearCompleteHttpInfos;
- (id)completeHttpInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)cancelErrorsCount;
- (void)clearCancelErrors;
- (id)cancelErrorAtIndex:(unsigned long long)a0;
- (id)errorAtIndex:(unsigned long long)a0;

@end
