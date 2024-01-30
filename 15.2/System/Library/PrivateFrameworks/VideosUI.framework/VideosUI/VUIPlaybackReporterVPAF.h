@class NSMapTable;

@interface VUIPlaybackReporterVPAF : VUIPlaybackReporter {
    NSMapTable *_pendingPlayerProperties;
}

+ (id)sharedInstance;
+ (unsigned long long)_playHeadMillis:(id)a0;

- (id)_screenInfo;
- (void).cxx_destruct;
- (id)init;
- (id)_connectionInfo;
- (void)dealloc;
- (BOOL)enforceSinglePlaybackSession;
- (void)_reportForSession:(id)a0 state:(id)a1 reason:(id)a2;
- (id)_createSessionForPlayer:(id)a0;
- (void)_handleSeek_iOS:(id)a0;
- (void)_handlePIPChange:(id)a0;
- (void)_handleDisplaySizeChange:(id)a0;
- (void)flushUnreportedEvents;
- (id)_metricsForSession:(id)a0;
- (id)_skipIntroActionForSession:(id)a0 consume:(BOOL)a1;
- (id)_videoDisplayInfoForSession:(id)a0;
- (id)_focusInfoForSession:(id)a0;
- (id)_metricsForPlayer:(id)a0 session:(id)a1;
- (id)_delegatedInfoForPlayer:(id)a0;
- (id)_colorRangeForPlayer:(id)a0;
- (id)_audioFormatForPlayer:(id)a0 session:(id)a1;
- (id)_sensitiveContentInfoForPlayer:(id)a0;
- (id)_downloadInfoForPlayer:(id)a0;
- (id)_subtitleInfoForPlayer:(id)a0;
- (id)_audioInfoForPlayer:(id)a0;
- (void)_setSessionMetadataValue:(id)a0 forKey:(id)a1 player:(id)a2;
- (BOOL)_isDelegatedForPlayer:(id)a0;

@end
