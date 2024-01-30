@class NSDictionary, NSString, CNUserDefaults;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>

@property (retain) CNUserDefaults *userDefaults;
@property BOOL preferNickname;
@property unsigned long long nameOrder;
@property unsigned long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) NSDictionary *filteredAccountsAndContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDefaults;
+ (id)registeredDefaults;
+ (id)makeRegisteredDefaults;
+ (unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)a0;

- (unsigned long long)sortOrder;
- (id)countryCode;
- (unsigned long long)newContactNameOrder;
- (void).cxx_destruct;
- (id)init;

@end
