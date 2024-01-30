@class NSString, NSMutableArray;

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _preferredIntervals;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedInsertionPositions;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedPlaybackQueueTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _supportedQueueEndActions;
    struct { float *list; unsigned long long count; unsigned long long size; } _supportedRates;
    int _canScrub;
    int _command;
    NSMutableArray *_currentPlaybackSessionTypes;
    int _currentQueueEndAction;
    int _disabledReason;
    NSString *_localizedShortTitle;
    NSString *_localizedTitle;
    float _maximumRating;
    float _minimumRating;
    int _numAvailableSkips;
    NSString *_playbackSessionIdentifier;
    float _preferredPlaybackRate;
    int _presentationStyle;
    int _repeatMode;
    int _shuffleMode;
    int _skipFrequency;
    int _skipInterval;
    NSMutableArray *_supportedCustomQueueIdentifiers;
    NSMutableArray *_supportedPlaybackSessionIdentifiers;
    NSMutableArray *_supportedPlaybackSessionTypes;
    int _upNextItemCount;
    BOOL _active;
    BOOL _enabled;
    BOOL _supportsSharedQueue;
    struct { unsigned char canScrub : 1; unsigned char command : 1; unsigned char currentQueueEndAction : 1; unsigned char disabledReason : 1; unsigned char maximumRating : 1; unsigned char minimumRating : 1; unsigned char numAvailableSkips : 1; unsigned char preferredPlaybackRate : 1; unsigned char presentationStyle : 1; unsigned char repeatMode : 1; unsigned char shuffleMode : 1; unsigned char skipFrequency : 1; unsigned char skipInterval : 1; unsigned char upNextItemCount : 1; unsigned char active : 1; unsigned char enabled : 1; unsigned char supportsSharedQueue : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
