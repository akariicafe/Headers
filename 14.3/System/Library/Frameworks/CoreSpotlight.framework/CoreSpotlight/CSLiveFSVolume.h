@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSLiveFSVolume : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) const char *volumeNameCString;
@property (readonly, nonatomic) unsigned long long volumeNameCStringLength;
@property (retain, nonatomic) NSObject<OS_xpc_object> *delayedObject;
@property (readonly, nonatomic) NSURL *volumeURL;
@property (readonly, nonatomic) NSString *volumeName;

+ (id)sharedInstance;

- (id)initWithVolumeURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVolumeName:(id)a0;
- (void)_handleDelayedEvent;
- (int)sendCSLiveFSEvent:(struct CSLiveEventInfo { int x0; int x1; char *x2; unsigned long long x3; id x4; int x5; union { struct CSLiveEventDataRename { char *x0; int x1; } x0; struct CSLiveEventDataXattr { id x0; id x1; } x1; } x6; } *)a0;
- (void)sendEventOfType:(int)a0 pid:(int)a1 path:(const char *)a2 pathLength:(unsigned long long)a3 attributes:(id)a4;
- (void)sendDeleteEventForPID:(int)a0 path:(const char *)a1 pathLength:(unsigned long long)a2;
- (BOOL)isInterestingPath:(const char *)a0;
- (void)sendPairedEventOfType:(int)a0 pid:(int)a1 fromPath:(const char *)a2 fromPathLength:(unsigned long long)a3 fromAttributes:(id)a4 toPath:(const char *)a5 toPathLength:(unsigned long long)a6 toAttributes:(id)a7;
- (void)sendXattrModifiedEventForPID:(int)a0 path:(const char *)a1 pathLength:(unsigned long long)a2 xAttrName:(id)a3 xAttrValue:(id)a4 attributes:(id)a5;
- (void)sendXattrRemovedEventForPID:(int)a0 path:(const char *)a1 pathLength:(unsigned long long)a2 xAttrName:(id)a3 attributes:(id)a4;

@end
