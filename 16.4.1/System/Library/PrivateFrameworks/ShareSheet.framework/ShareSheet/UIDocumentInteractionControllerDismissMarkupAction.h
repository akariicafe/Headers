@class NSString;

@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;

@end
