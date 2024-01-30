@interface SGContactStoreFactory : NSObject

+ (id)contactStore;
+ (id)contactStoreWithDonatedContacts;
+ (void)useMockContactStore:(id)a0;

@end
