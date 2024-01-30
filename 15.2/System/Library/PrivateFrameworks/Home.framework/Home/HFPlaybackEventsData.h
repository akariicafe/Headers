@class NSArray;

@interface HFPlaybackEventsData : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSArray *cameraEvents;
@property (retain, nonatomic) NSArray *cameraClips;

- (void).cxx_destruct;
- (id)init;
- (void)updateData:(id)a0 cameraClips:(id)a1;

@end
