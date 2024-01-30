@class CACVoiceOverAnnouncement, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CACVoiceOverAnnouncer : NSObject {
    NSObject<OS_dispatch_queue> *_announcerQueue;
}

@property (retain, nonatomic) NSMutableArray *voiceOverAnnouncementQueue;
@property (retain, nonatomic) CACVoiceOverAnnouncement *currentAnnouncement;
@property (nonatomic) BOOL shouldInterruptCurrentAnnouncement;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForImmediateAnnouncement;
- (void)_dequeueNextAnnouncement;
- (void)_didFinishAnnouncement:(id)a0;
- (void)announceMessage:(id)a0 type:(long long)a1 completion:(id /* block */)a2;

@end
