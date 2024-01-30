@interface CSVTUITrainingResult : NSObject

@property (readonly, nonatomic) long long sessionId;
@property (readonly, nonatomic) int sessionStatus;
@property (readonly, nonatomic) int audioStatus;

- (id)initWithSessionId:(long long)a0 sessionStatus:(int)a1 audioStatus:(int)a2;

@end
