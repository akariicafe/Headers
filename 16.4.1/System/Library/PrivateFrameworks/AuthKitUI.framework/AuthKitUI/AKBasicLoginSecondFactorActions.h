@interface AKBasicLoginSecondFactorActions : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ regenerateCodeAction;
@property (copy, nonatomic) id /* block */ codeEnteredAction;
@property (copy, nonatomic) id /* block */ ak_cancelAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
