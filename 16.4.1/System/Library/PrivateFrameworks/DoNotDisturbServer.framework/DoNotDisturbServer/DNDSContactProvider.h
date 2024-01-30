@class NSString, CNContactStore;

@interface DNDSContactProvider : NSObject <DNDSContactProviding> {
    CNContactStore *_contactStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedContactStore;

@end
