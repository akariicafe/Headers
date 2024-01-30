@interface IKDOMException : IKJSObject <IKJSDOMException>

@property (nonatomic) long long code;

+ (id)exceptionWithAppContext:(id)a0 code:(long long)a1;

@end
