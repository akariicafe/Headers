@interface SGContactStoreFactory : NSObject

+ (id)contactStore;
+ (void)useMockContactStore:(id)a0;
+ (id)contactStoreWithDonatedContacts;

@end
