@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject

@property (retain, nonatomic) NSMutableDictionary *managedProperties;
@property (readonly, weak, nonatomic) IKAppContext *appContext;

+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (id)invokeMethod:(id)a0 withArguments:(id)a1;
- (id)initWithAppContext:(id)a0;
- (void)setJSValue:(id)a0 forProperty:(id)a1;
- (id)jsValueForProperty:(id)a0;

@end
