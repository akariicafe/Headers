@class NSDictionary, NSString;

@interface UIKit_PKSubsystem : NSObject <PKModularService> {
    BOOL _initialized;
}

@property (copy, nonatomic) NSDictionary *infoDictionary;
@property (nonatomic, getter=isPlugInKitProcess) BOOL plugInKitProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)initForPlugInKitWithOptions:(id)a0;
+ (id)initForPlugInKit;

- (void)beginUsing:(id)a0 withBundle:(id)a1;
- (void)dealloc;
- (void)endUsing:(id)a0;

@end
