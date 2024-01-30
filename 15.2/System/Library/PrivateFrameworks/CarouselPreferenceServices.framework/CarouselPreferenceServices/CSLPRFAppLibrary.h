@class NSDictionary, NSArray, NSString;
@protocol CSLPRFAppDataProviderDelegate;

@interface CSLPRFAppLibrary : NSObject <CSLPRFAppDataProviderDelegate, CSLPRFAppDataProvider>

@property (retain, nonatomic) NSDictionary *apps;
@property (retain, nonatomic) NSArray *appDataProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSLPRFAppDataProviderDelegate> delegate;

- (void).cxx_destruct;
- (void)loadAppsWithCompletion:(id /* block */)a0 completionQueue:(id)a1;
- (void)dataProviderDidChange:(id)a0;
- (void)loadAppsWithCompletion:(id /* block */)a0;
- (id)initWithAppDataProviders:(id)a0;

@end
