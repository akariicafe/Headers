@class TLAlertPlaybackCompletionContext, NSString, TLSystemSound;
@protocol TLAlertPlaybackObserver;

@interface TLAlertSystemSoundContext : NSObject

@property (retain, nonatomic) TLSystemSound *sound;
@property (retain, nonatomic) TLAlertPlaybackCompletionContext *playbackCompletionContext;
@property (weak, nonatomic) id<TLAlertPlaybackObserver> playbackObserver;
@property (nonatomic) BOOL hasPlaybackStarted;
@property (nonatomic, getter=isBeingInterrupted) BOOL beingInterrupted;
@property (copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert;
@property (nonatomic, getter=isBeingDeemphasized) BOOL beingDeemphasized;
@property (nonatomic, getter=isDeemphasized) BOOL deemphasized;

- (void).cxx_destruct;

@end
