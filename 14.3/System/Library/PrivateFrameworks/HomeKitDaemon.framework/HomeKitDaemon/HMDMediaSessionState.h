@class NSNumber, NSString;
@protocol HMFLocking;

@interface HMDMediaSessionState : HMFObject <HMFDumpState> {
    id<HMFLocking> _lock;
}

@property (nonatomic) long long playbackState;
@property (nonatomic) long long shuffleState;
@property (nonatomic) long long repeatState;
@property (copy) NSNumber *volume;
@property (copy) NSNumber *muted;
@property (copy) NSString *mediaUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dumpState;
- (BOOL)isEqual:(id)a0;
- (id)initWithSessionIdentifier:(id)a0;

@end
