@class NSString;

@interface CNKMomentsIndicatorViewModel : NSObject

@property (readonly, nonatomic) NSString *name;
@property (nonatomic) unsigned long long refreshCount;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (void)refresh;
- (id)initWithType:(long long)a0 remoteParticipantName:(id)a1;
- (BOOL)shouldShowCount;
- (unsigned long long)captureCount;

@end
