@class IMHandle;
@protocol IMUnavailabilityIndicatorChatItemDelegate;

@interface IMUnavailabilityIndicatorChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *handle;
@property (nonatomic) BOOL displayNotifyAnywayButton;
@property (weak, nonatomic) id<IMUnavailabilityIndicatorChatItemDelegate> unavailabilityIndicatorChatItemDelegate;

- (void).cxx_destruct;
- (id)_initWithHandle:(id)a0 displayNotifyAnywayButton:(BOOL)a1;

@end
