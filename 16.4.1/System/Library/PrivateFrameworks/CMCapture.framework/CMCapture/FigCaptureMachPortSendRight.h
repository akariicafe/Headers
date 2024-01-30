@interface FigCaptureMachPortSendRight : NSObject {
    BOOL _invalid;
}

@property (readonly, nonatomic) unsigned int port;

- (id)initWithPort:(unsigned int)a0;
- (void)dealloc;
- (id)description;
- (void)invalidate;

@end
