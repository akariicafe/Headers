@class NSString;

@interface NotificationCenter_TMLModule : NSObject <TMLModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeJSContext:(id)a0;
+ (BOOL)loadModule;
+ (void)defineConstants:(id)a0;


@end
