@class NSString;

@interface SGSuggestionAction : NSObject {
    NSString *_title;
    id /* block */ _handler;
}

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;

- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)execute;
- (id)title;

@end
