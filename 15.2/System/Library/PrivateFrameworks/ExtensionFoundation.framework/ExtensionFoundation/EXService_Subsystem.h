@class NSString;

@interface EXService_Subsystem : NSObject <PKModularService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)initForPlugInKit;

- (void)beginUsing:(id)a0 withBundle:(id)a1;

@end
