@interface SFRequestMessage : SFMessage

@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)invalidate;

@end
