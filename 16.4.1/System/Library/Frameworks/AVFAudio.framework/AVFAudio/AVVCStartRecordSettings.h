@interface AVVCStartRecordSettings : NSObject

@property (nonatomic) unsigned long long streamID;
@property (nonatomic) unsigned long long startHostTime;
@property (nonatomic) long long startAlert;
@property (nonatomic) long long stopAlert;
@property (nonatomic) long long stopOnErrorAlert;
@property (nonatomic) BOOL skipAlert;
@property (nonatomic) unsigned int startAnchorPoint;

- (id)initWithStreamID:(unsigned long long)a0 atStartHostTime:(unsigned long long)a1;

@end
