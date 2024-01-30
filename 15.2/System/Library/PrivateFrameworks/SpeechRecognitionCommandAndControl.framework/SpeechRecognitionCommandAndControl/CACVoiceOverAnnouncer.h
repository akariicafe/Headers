@class CACVoiceOverAnnouncement, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CACVoiceOverAnnouncer : NSObject {
    NSObject<OS_dispatch_queue> *_announcerQueue;
}

@property (retain, nonatomic) NSMutableArray *voiceOverAnnouncementQueue;
@property (retain, nonatomic) CACVoiceOverAnnouncement *currentAnnouncement;
@property (nonatomic) BOOL shouldInterruptCurrentAnnouncement;

- (void).cxx_destruct;
- (id)init;
- (void)_didFinishAnnouncement:(id)a0;
- (void)_dequeueNextAnnouncement;
- (void)announceMessage:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)prepareForImmediateAnnouncement;

@end
