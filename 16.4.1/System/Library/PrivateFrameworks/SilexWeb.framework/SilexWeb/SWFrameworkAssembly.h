@class NSArray, NSString;

@interface SWFrameworkAssembly : NSObject <TFFrameworkAssembly>

@property (readonly, copy, nonatomic) NSArray *assemblies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
