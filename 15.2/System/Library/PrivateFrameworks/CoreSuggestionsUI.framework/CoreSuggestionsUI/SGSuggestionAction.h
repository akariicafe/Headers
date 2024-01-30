@class NSString;

@interface SGSuggestionAction : NSObject {
    NSString *_title;
    id /* block */ _handler;
}

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;

- (void)execute;
- (id)title;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;

@end
