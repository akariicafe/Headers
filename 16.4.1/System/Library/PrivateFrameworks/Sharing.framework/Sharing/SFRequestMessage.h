@interface SFRequestMessage : SFMessage

@property (copy, nonatomic) id /* block */ responseHandler;

- (void)invalidate;
- (void).cxx_destruct;

@end
