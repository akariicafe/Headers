@interface EQKitEnvironment : NSObject

@property (readonly, nonatomic) BOOL fontsLoaded;

+ (id)defaultEnvironment;
+ (id)dataForEnvironment:(id)a0;
+ (id)environmentFromData:(id)a0;

@end
