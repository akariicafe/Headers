@class NSDate, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface PXStoryLoadingStatusReporter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _lock_statesCount;
    unsigned long long _lock_statesCapacity;
    struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *_lock_states;
    NSMutableDictionary *_lock_stateIndexByClipIdentifier;
    NSDate *_lock_lastUserActivity;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)_lock_stateForClipIdentifier:(long long)a0;
- (void)_lock_updateStatusForLoadingState:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 error:(id)a1 clipIdentifier:(long long)a2;
- (void)notifyUserDidNavigate;
- (void)notifyStartedPreloadingClipIdentifier:(long long)a0;
- (void)notifyPreloadingProgress:(double)a0 error:(id)a1 forClipIdentifier:(long long)a2;
- (void)notifyPreloadingCompleteForClipIdentifier:(long long)a0;
- (void)notifyVisibility:(unsigned char)a0 forClipIdentifier:(long long)a1;
- (void)notifyLoadingStatus:(unsigned char)a0 error:(id)a1 forClipIdentifier:(long long)a2;

@end
