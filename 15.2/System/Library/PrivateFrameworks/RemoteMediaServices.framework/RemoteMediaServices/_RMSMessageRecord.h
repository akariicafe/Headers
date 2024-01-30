@interface _RMSMessageRecord : NSObject

@property (nonatomic) unsigned short messageType;
@property (retain, nonatomic) id responseBlock;

- (void).cxx_destruct;

@end
