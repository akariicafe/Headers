@interface EQKitEnvironment : NSObject

+ (id)defaultEnvironment;
+ (id)dataForEnvironment:(id)a0;
+ (id)environmentFromData:(id)a0;
+ (id)dataForDefaultEnvironment;

- (void)reloadFonts;

@end
