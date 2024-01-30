@class NSString, FCFlintResourceManager, FCANFContent, NSMutableArray, FCAsyncOnceOperation;
@protocol NUFontRegistration;

@interface NUANFFontLoader : NSObject <NUFontRegistrator>

@property (readonly, nonatomic) FCANFContent *anfContent;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (readonly, nonatomic) NSMutableArray *fontResourcesToRegister;
@property (readonly, nonatomic) NSMutableArray *fontResourcesRegistered;
@property (readonly, nonatomic) FCAsyncOnceOperation *asyncOnceOperation;
@property (readonly, nonatomic) id<NUFontRegistration> fontRegistration;
@property (readonly, nonatomic) BOOL hasLoaded;
@property (nonatomic) long long relativePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)asyncLoadFontsOnceWithCompletion:(id /* block */)a0;
- (id)initWithANFContent:(id)a0 flintResourceManager:(id)a1 fontRegistration:(id)a2;
- (id)loadFontsWithCompletion:(id /* block */)a0;
- (void)registerFontsWithCompletion:(id /* block */)a0;
- (void)unregisterFontsWithCompletion:(id /* block */)a0;

@end
