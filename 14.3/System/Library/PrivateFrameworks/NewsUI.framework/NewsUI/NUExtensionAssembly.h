@class NSString;
@protocol NUExtensionContextProvider;

@interface NUExtensionAssembly : NSObject <NFAssembly>

@property (readonly, weak, nonatomic) id<NUExtensionContextProvider> extensionContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadInRegistry:(id)a0;
- (id)initWithExtensionContextProvider:(id)a0;

@end
