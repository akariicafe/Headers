@class CNContactStore, CNSharingProfileLogger, CNContact, CNMutableContact;
@protocol CNSharingProfileMeCardUpdaterDelegate;

@interface CNSharingProfileMeCardUpdater : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContact *imageContact;
@property (retain, nonatomic) CNSharingProfileLogger *logger;
@property (weak, nonatomic) id<CNSharingProfileMeCardUpdaterDelegate> delegate;
@property (readonly, nonatomic) CNMutableContact *meContact;

- (void).cxx_destruct;
- (id)initWithMeContact:(id)a0 contactStore:(id)a1;
- (id)alertControllerForMeCardUpdateWithImageContact:(id)a0;
- (void)performSave;

@end
