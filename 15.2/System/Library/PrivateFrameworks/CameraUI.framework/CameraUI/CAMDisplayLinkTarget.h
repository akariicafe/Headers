@interface CAMDisplayLinkTarget : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;

- (void)displayLinkDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;

@end
