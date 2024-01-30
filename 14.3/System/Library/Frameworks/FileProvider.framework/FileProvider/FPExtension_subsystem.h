@class NSDictionary, NSString;

@interface FPExtension_subsystem : NSObject <PKModularService> {
    BOOL _initialized;
}

@property (copy, nonatomic) NSDictionary *infoDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)initForPlugInKit;

- (void).cxx_destruct;
- (void)beginUsing:(id)a0 withBundle:(id)a1;
- (void)endUsing:(id)a0;

@end
