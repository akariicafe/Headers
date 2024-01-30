@class NSArray, NSString;

@interface MRAVOutputContextModification : NSObject

@property (readonly, nonatomic) unsigned long long modificationType;
@property (readonly, nonatomic) NSArray *concreteOutputDevices;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSArray *avOutputDevices;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *initiator;
@property (nonatomic) BOOL shouldFadeAudio;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 devices:(id)a1;
- (void)modifyWithOutputContext:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
