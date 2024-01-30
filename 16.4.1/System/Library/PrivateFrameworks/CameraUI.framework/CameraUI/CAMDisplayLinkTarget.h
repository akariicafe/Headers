@interface CAMDisplayLinkTarget : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;

- (void)displayLinkDidFire:(id)a0;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
