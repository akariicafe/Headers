@class CNContactStore, CNContact;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *store;
@property (nonatomic) BOOL isEnabled;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)allowContextProvider:(id)a0;
- (id)defaultContextManager;
- (id)initWithContact:(id)a0 store:(id)a1;
- (void)_removeContextProviderOnMainThread;
- (id)getCurrentContext;
- (void)setEnabled:(BOOL)a0;

@end
