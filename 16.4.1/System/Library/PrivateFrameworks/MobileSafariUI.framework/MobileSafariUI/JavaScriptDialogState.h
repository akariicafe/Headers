@class NSString;

@interface JavaScriptDialogState : NSObject

@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *currentInput;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 type:(long long)a1 completionHandler:(id /* block */)a2;

@end
