@interface FigCaptureMachPortSendRight : NSObject {
    BOOL _invalid;
}

@property (readonly, nonatomic) unsigned int port;

- (id)description;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPort:(unsigned int)a0;

@end
