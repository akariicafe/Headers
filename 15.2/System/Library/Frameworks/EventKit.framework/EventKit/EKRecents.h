@interface EKRecents : NSObject

+ (Class)crRecentContactsLibraryClass;
+ (id)recentForContactWithAddress:(id)a0 name:(id)a1 kind:(id)a2;
+ (id)crRecentsDomainCalendarString;
+ (id)crAddressKindEmailString;
+ (void)recordRecentWithAddress:(id)a0 name:(id)a1 kind:(id)a2;
+ (id)crAddressKindPhoneNumberString;
+ (BOOL)recordRecentForContactWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2;

@end
