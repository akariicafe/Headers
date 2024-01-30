@interface PCKeepAliveState : NSObject

@property (nonatomic) unsigned char state;
@property (nonatomic) unsigned char subState;

- (id)initWithKeepAliveState:(unsigned char)a0 subState:(unsigned char)a1;

@end
