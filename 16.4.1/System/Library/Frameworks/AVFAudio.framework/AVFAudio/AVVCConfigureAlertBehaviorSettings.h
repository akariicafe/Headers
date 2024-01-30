@interface AVVCConfigureAlertBehaviorSettings : NSObject

@property (nonatomic) unsigned long long streamID;
@property (nonatomic) long long startAlert;
@property (nonatomic) long long stopAlert;
@property (nonatomic) long long stopOnErrorAlert;

- (id)initWithStreamID:(unsigned long long)a0;

@end
