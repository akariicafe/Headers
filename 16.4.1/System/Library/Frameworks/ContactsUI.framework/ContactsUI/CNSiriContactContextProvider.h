@class CNContactStore, CNContact;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *store;
@property (nonatomic) BOOL isEnabled;

+ (id)descriptorForRequiredKeys;

- (BOOL)allowContextProvider:(id)a0;
- (void)dealloc;
- (id)getCurrentContext;
- (void)setEnabled:(BOOL)a0;
- (id)defaultContextManager;
- (void).cxx_destruct;
- (void)_removeContextProviderOnMainThread;
- (id)initWithContact:(id)a0 store:(id)a1;

@end
