@class NSString, CNContact;

@interface CNMeCardSharingContactNameProvider : NSObject <CNMeCardSharingNameProvider>

@property (readonly, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)givenName;
- (id)nickname;
- (id)familyName;
- (id)middleName;
- (id)initWithContact:(id)a0;
- (void).cxx_destruct;

@end
