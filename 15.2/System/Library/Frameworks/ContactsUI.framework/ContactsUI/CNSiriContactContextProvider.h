@class CNContactStore, CNContact;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *store;
@property (nonatomic) BOOL isEnabled;

+ (id)descriptorForRequiredKeys;

- (void)setEnabled:(BOOL)a0;
- (BOOL)allowContextProvider:(id)a0;
- (id)initWithContact:(id)a0 store:(id)a1;
- (void)_removeContextProviderOnMainThread;
- (id)getCurrentContext;
- (void).cxx_destruct;
- (id)defaultContextManager;
- (void)dealloc;

@end
