@class NSString;

@interface CNKMomentsIndicatorViewModel : NSObject

@property (readonly, nonatomic) NSString *name;
@property (nonatomic) unsigned long long refreshCount;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long type;

- (void)refresh;
- (void).cxx_destruct;
- (BOOL)shouldShowCount;
- (unsigned long long)captureCount;
- (id)initWithType:(long long)a0 remoteParticipantName:(id)a1;

@end
