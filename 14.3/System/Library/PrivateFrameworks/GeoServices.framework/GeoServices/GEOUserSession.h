@class NSData, GEOUserSessionEntity, NSObject, GEOUserSessionSnapshot;
@protocol OS_dispatch_queue;

@interface GEOUserSession : NSObject {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    double _sessionCreationTime;
    unsigned int _sequenceNumber;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _longSessionID;
    double _longSessionIDGenerationTime;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _15MonthSessionID;
    double _15MonthSessionIDGenerationTime;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _cohortSessionID;
    double _cohortSessionStartTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSData *_navigationDirectionsID;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _navigationSessionID;
    double _navigationSessionStartTime;
    NSData *_previousNavigationDirectionsID;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _previousNavigationSessionID;
    double _previousNavigationSessionStartTime;
    double _previousNavigationSessionEndTime;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _zeroSessionID;
    unsigned char _shortSessionMachElapsedShiftFactor;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _shortSessionID;
    double _shortSessionCreationTime;
    unsigned long long _shortSessionMachTimeBasis;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    int _shortSessionChangedToken;
}

@property (class, nonatomic) BOOL initialShareSessionWithMaps;

@property (nonatomic) BOOL shareSessionWithMaps;
@property (retain, nonatomic) GEOUserSessionEntity *mapsUserSessionEntity;
@property (readonly, nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } longSessionID;
@property (readonly, nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } fifteenMonthSessionID;
@property (nonatomic) BOOL zeroSessionIDMode;
@property (readonly, nonatomic) GEOUserSessionEntity *longSessionEntity;
@property (readonly, nonatomic) GEOUserSessionEntity *fifteenMonthSessionEntity;
@property (readonly, nonatomic) GEOUserSessionEntity *navSessionEntity;
@property (readonly, nonatomic) GEOUserSessionEntity *cohortSessionEntity;
@property (readonly, nonatomic) GEOUserSessionSnapshot *userSessionSnapshot;

+ (id)sharedInstance;
+ (void)setIsGeod;
+ (BOOL)isGeod;

- (id)shortSessionEntity;
- (void)setSharedMapsUserSessionEntity:(id)a0 shareSessionIDWithMaps:(BOOL)a1;
- (void)_generateNewNavSessionID;
- (double)_getCurrentTime;
- (id)init;
- (void)_updateWithNewUUIDForSessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)_create15MonthSessionFirstTime:(BOOL)a0;
- (void)_createLongSessionWithOffset:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_overrideShortSessionId:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a0 sessionMachBasisTime:(unsigned long long)a1 sessionStartTime:(double)a2;
- (void)_rollInitialLongSessionId;
- (void)startNavigationSessionWithDirectionsID:(id)a0 originalDirectionsID:(id)a1;
- (void)mapsSessionEntityWithCallback:(id /* block */)a0 shareSessionIDWithMaps:(BOOL)a1 resetSession:(BOOL)a2;
- (void)_shortSessionWithBasisComponentsCompletion:(id /* block */)a0;
- (void)endNavigationSession;
- (void)_updateNavSessionID;
- (void)prepareForNewShortSession;
- (void)_resetSessionID;
- (void)_rollInitial15MonthSessionId;
- (void)_renewLongSessionID;
- (void)_safe_renewLongSessionID;
- (void)_renew15MonthSessionId;

@end
