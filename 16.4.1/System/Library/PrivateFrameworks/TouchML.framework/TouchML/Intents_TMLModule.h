@class NSString;

@interface Intents_TMLModule : NSObject <TMLModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)loadModule;


@end
