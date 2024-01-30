@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression>

@property (copy, nonatomic) id /* block */ evaluatingBlock;

- (void).cxx_destruct;
- (id)evaluate:(id)a0 :(long long)a1 :(id)a2;
- (id)initWithAppContext:(id)a0 evaluatingBlock:(id /* block */)a1;

@end
