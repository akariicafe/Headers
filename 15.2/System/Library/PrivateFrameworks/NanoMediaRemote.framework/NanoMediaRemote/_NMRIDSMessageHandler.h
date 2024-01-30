@interface _NMRIDSMessageHandler : NSObject

@property (nonatomic) unsigned short messageType;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (void).cxx_destruct;

@end
