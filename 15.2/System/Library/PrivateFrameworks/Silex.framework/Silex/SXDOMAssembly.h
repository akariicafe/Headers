@class NSString;

@interface SXDOMAssembly : NSObject <TFAssembly>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadInRegistry:(id)a0;

@end
