@class CNContactStore, CNContact;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *store;
@property (nonatomic) BOOL isEnabled;

+ (id)descriptorForRequiredKeys;

- (void)dealloc;
- (id)defaultContextManager;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)_removeContextProviderOnMainThread;
- (BOOL)allowContextProvider:(id)a0;
- (id)getCurrentContext;
- (id)initWithContact:(id)a0 store:(id)a1;

@end
