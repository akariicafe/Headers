@class ECMessageFlagChange;
@protocol EDPersistedMessage;

@interface _EDMessageChangeManagerFlagChange : NSObject

@property (retain, nonatomic) id<EDPersistedMessage> message;
@property (retain, nonatomic) ECMessageFlagChange *serverChange;
@property (retain, nonatomic) ECMessageFlagChange *localChange;

- (void).cxx_destruct;

@end
