@class NSMutableArray;

@interface AWDSymptomsCellularSDMAdviceChange : PBCodable <NSCopying> {
    struct { unsigned char dlPriorThroughputBytesPerSec : 1; unsigned char dlSubsequentThroughputBytesPerSec : 1; unsigned char newAdviceAdditionalFlags : 1; unsigned char previousAdviceDuration : 1; unsigned char timestamp : 1; unsigned char ulPriorThroughputBytesPerSec : 1; unsigned char ulSubsequentThroughputBytesPerSec : 1; unsigned char newAdvice : 1; unsigned char newAdviceCause : 1; unsigned char previousAdvice : 1; unsigned char previousAdviceCause : 1; unsigned char previousAdviceInitialCause : 1; unsigned char newScreenIsDark : 1; unsigned char newScreenIsLocked : 1; unsigned char previousScreenIsDark : 1; unsigned char previousScreenIsLocked : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPreviousAdvice;
@property (nonatomic) int previousAdvice;
@property (nonatomic) BOOL hasPreviousAdviceCause;
@property (nonatomic) int previousAdviceCause;
@property (nonatomic) BOOL hasPreviousAdviceDuration;
@property (nonatomic) unsigned long long previousAdviceDuration;
@property (nonatomic) BOOL hasDlPriorThroughputBytesPerSec;
@property (nonatomic) unsigned long long dlPriorThroughputBytesPerSec;
@property (nonatomic) BOOL hasUlPriorThroughputBytesPerSec;
@property (nonatomic) unsigned long long ulPriorThroughputBytesPerSec;
@property (nonatomic) BOOL hasNewAdvice;
@property (nonatomic) int newAdvice;
@property (nonatomic) BOOL hasNewAdviceCause;
@property (nonatomic) int newAdviceCause;
@property (nonatomic) BOOL hasNewAdviceAdditionalFlags;
@property (nonatomic) unsigned long long newAdviceAdditionalFlags;
@property (nonatomic) BOOL hasDlSubsequentThroughputBytesPerSec;
@property (nonatomic) unsigned long long dlSubsequentThroughputBytesPerSec;
@property (nonatomic) BOOL hasUlSubsequentThroughputBytesPerSec;
@property (nonatomic) unsigned long long ulSubsequentThroughputBytesPerSec;
@property (retain, nonatomic) NSMutableArray *adviceInitiatingNames;
@property (retain, nonatomic) NSMutableArray *oldAdvicePartipants;
@property (nonatomic) BOOL hasPreviousScreenIsDark;
@property (nonatomic) BOOL previousScreenIsDark;
@property (nonatomic) BOOL hasPreviousScreenIsLocked;
@property (nonatomic) BOOL previousScreenIsLocked;
@property (nonatomic) BOOL hasNewScreenIsDark;
@property (nonatomic) BOOL newScreenIsDark;
@property (nonatomic) BOOL hasNewScreenIsLocked;
@property (nonatomic) BOOL newScreenIsLocked;
@property (nonatomic) BOOL hasPreviousAdviceInitialCause;
@property (nonatomic) int previousAdviceInitialCause;

+ (Class)adviceInitiatingNamesType;
+ (Class)oldAdvicePartipantsType;

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
- (void)addAdviceInitiatingNames:(id)a0;
- (void)addOldAdvicePartipants:(id)a0;
- (unsigned long long)adviceInitiatingNamesCount;
- (void)clearAdviceInitiatingNames;
- (id)adviceInitiatingNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)oldAdvicePartipantsCount;
- (void)clearOldAdvicePartipants;
- (id)oldAdvicePartipantsAtIndex:(unsigned long long)a0;
- (id)previousAdviceAsString:(int)a0;
- (int)StringAsPreviousAdvice:(id)a0;
- (id)previousAdviceCauseAsString:(int)a0;
- (int)StringAsPreviousAdviceCause:(id)a0;
- (id)newAdviceAsString:(int)a0;
- (int)StringAsNewAdvice:(id)a0;
- (id)newAdviceCauseAsString:(int)a0;
- (int)StringAsNewAdviceCause:(id)a0;
- (id)previousAdviceInitialCauseAsString:(int)a0;
- (int)StringAsPreviousAdviceInitialCause:(id)a0;

@end
