@class IMHandle, NSString, NSArray, CNContact, NSMutableArray;

@interface IMMe : NSObject {
    NSString *_cnNickname;
    NSString *_cnFirstName;
    NSString *_cnFullName;
    NSString *_cnLastName;
    NSArray *_cnEmails;
    NSMutableArray *_cnIMHandles;
    NSMutableArray *_loginIMHandles;
}

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) CNContact *cnContact;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) IMHandle *bestIMHandle;
@property (readonly, nonatomic) NSArray *imHandles;

+ (id)firstNameFromFallbackUserName;
+ (id)fallbackUserName;
+ (id)me;
+ (id)imHandleForService:(id)a0;
+ (id)lastNameFromFallbackUserName;

- (void)myPictureChanged;
- (void)resetABPerson;
- (BOOL)removeIMHandle:(id)a0;
- (id)description;
- (BOOL)addLoginIMHandle:(id)a0;
- (void).cxx_destruct;
- (void)setCNContact:(id)a0;
- (id)init;
- (BOOL)addIMHandle:(id)a0;
- (BOOL)removeLoginIMHandle:(id)a0;
- (BOOL)isIMHandleLoginIMHandle:(id)a0;
- (void)rebuildIMHandles;
- (id)loginIMHandles;
- (id)_imHandlesWithIDs:(id)a0 onAccount:(id)a1;

@end
