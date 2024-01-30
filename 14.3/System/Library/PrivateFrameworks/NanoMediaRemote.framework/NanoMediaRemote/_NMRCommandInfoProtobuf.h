@class NSString;

@interface _NMRCommandInfoProtobuf : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _preferredIntervals;
    struct { float *list; unsigned long long count; unsigned long long size; } _supportedPlaybackRates;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedQueueEndActions;
    struct { unsigned char command : 1; unsigned char currentQueueEndAction : 1; unsigned char maximumRating : 1; unsigned char minimumRating : 1; unsigned char preferredPlaybackRate : 1; unsigned char presentationStyle : 1; unsigned char repeatMode : 1; unsigned char shuffleMode : 1; unsigned char active : 1; unsigned char enabled : 1; } _has;
}

@property (nonatomic) BOOL hasCommand;
@property (nonatomic) int command;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) unsigned long long preferredIntervalsCount;
@property (readonly, nonatomic) double *preferredIntervals;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (retain, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL hasLocalizedShortTitle;
@property (retain, nonatomic) NSString *localizedShortTitle;
@property (nonatomic) BOOL hasMinimumRating;
@property (nonatomic) float minimumRating;
@property (nonatomic) BOOL hasMaximumRating;
@property (nonatomic) float maximumRating;
@property (readonly, nonatomic) unsigned long long supportedPlaybackRatesCount;
@property (readonly, nonatomic) float *supportedPlaybackRates;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) int repeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) BOOL hasPresentationStyle;
@property (nonatomic) int presentationStyle;
@property (nonatomic) BOOL hasPreferredPlaybackRate;
@property (nonatomic) float preferredPlaybackRate;
@property (nonatomic) BOOL hasCurrentQueueEndAction;
@property (nonatomic) int currentQueueEndAction;
@property (readonly, nonatomic) unsigned long long supportedQueueEndActionsCount;
@property (readonly, nonatomic) int *supportedQueueEndActions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)commandAsString:(int)a0;
- (int)StringAsCommand:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)repeatModeAsString:(int)a0;
- (int)StringAsRepeatMode:(id)a0;
- (id)shuffleModeAsString:(int)a0;
- (int)StringAsShuffleMode:(id)a0;
- (void)clearPreferredIntervals;
- (double)preferredIntervalAtIndex:(unsigned long long)a0;
- (void)addPreferredInterval:(double)a0;
- (void)clearSupportedPlaybackRates;
- (float)supportedPlaybackRateAtIndex:(unsigned long long)a0;
- (void)addSupportedPlaybackRate:(float)a0;
- (void)clearSupportedQueueEndActions;
- (int)supportedQueueEndActionAtIndex:(unsigned long long)a0;
- (void)addSupportedQueueEndAction:(int)a0;
- (void)setPreferredIntervals:(double *)a0 count:(unsigned long long)a1;
- (void)setSupportedPlaybackRates:(float *)a0 count:(unsigned long long)a1;
- (id)currentQueueEndActionAsString:(int)a0;
- (int)StringAsCurrentQueueEndAction:(id)a0;
- (void)setSupportedQueueEndActions:(int *)a0 count:(unsigned long long)a1;
- (id)supportedQueueEndActionsAsString:(int)a0;
- (int)StringAsSupportedQueueEndActions:(id)a0;

@end
