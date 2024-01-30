@protocol IKAppUserDefaultsStoring;

@interface IKJSUserDefaults : IKJSObject <IKJSUserDefaults>

@property (weak, nonatomic) id<IKAppUserDefaultsStoring> userDefaultsStorage;

- (void)removeData:(id)a0;
- (void).cxx_destruct;
- (id)getData:(id)a0;
- (id)initWithAppContext:(id)a0 userDefaultsStorage:(id)a1;
- (void)setData:(id)a0 :(id)a1;

@end
