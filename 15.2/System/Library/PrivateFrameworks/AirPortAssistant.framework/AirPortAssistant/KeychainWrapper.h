@class NSString, NSLock;

@interface KeychainWrapper : NSObject

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSLock *lock;

+ (id)keychainWrapperWithMACAddress:(id)a0;
+ (id)keychainPasswordForMACAddress:(id)a0;
+ (void)removeKeychainPasswordForMACAddress:(id)a0;

- (id)genericPasswordQuery;
- (void)dealloc;
- (int)addGenericPassword:(id)a0 withLabel:(id)a1 andDescription:(id)a2;
- (void)removeGenericPassword;
- (id)initWithAccountName:(id)a0 serviceName:(id)a1;
- (id)genericPassword;
- (id)getPasswordFromQuery:(id)a0;
- (id)getGenericPassword;

@end
