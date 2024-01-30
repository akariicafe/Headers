@protocol IKEntityValueProviding;

@interface IKJSEntityValueProvider : IKJSObject <IKJSEntityValueProvider>

@property (retain, nonatomic) id<IKEntityValueProviding> entityValueProvider;

- (void).cxx_destruct;
- (id)valueForEntityProperty:(id)a0;
- (id)valuesForEntityProperties:(id)a0;
- (id)_valueForEntityProperty:(id)a0;

@end
