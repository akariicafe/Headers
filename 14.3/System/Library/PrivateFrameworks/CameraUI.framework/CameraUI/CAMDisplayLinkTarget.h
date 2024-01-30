@interface CAMDisplayLinkTarget : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)displayLinkDidFire:(id)a0;
- (id)initWithHandler:(id /* block */)a0;

@end
