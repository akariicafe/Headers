@class NSString;

@interface WFActionAuxiliaryButton : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *symbolName;
@property (copy, nonatomic) id /* block */ handler;

+ (id)buttonWithTitle:(id)a0 symbolName:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 symbolName:(id)a1 handler:(id /* block */)a2;

@end
