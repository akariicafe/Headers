@class _TVRCMRTelevisionWrapper, NSString, NSTimer, NSMutableArray;
@protocol _TVRCMediaRemoteKeyboardAdapterDelegate;

@interface _TVRCMediaRemoteKeyboardAdapter : NSObject

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *typedStringsAwaitingAcknowledgement;
@property (weak, nonatomic) NSTimer *acknowledgementTimer;
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (weak, nonatomic) id<_TVRCMediaRemoteKeyboardAdapterDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)sessionEnded;
- (void)userEnteredText:(id)a0;
- (void)sessionBeganWithInitialText:(id)a0;
- (void)receivedRemotelyUpdatedText:(id)a0;
- (void)_acknowledgementTimerExpired:(id)a0;
- (void)_resetTextValueToSessionValue;

@end
