@class CNContactStore, NSObject;
@protocol OS_os_log, CNLSApplicationWorkspace, CNUIInteractionDonor;

@interface CNUIUserActivityManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly, nonatomic) id<CNUIInteractionDonor> interactionDonor;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)makeActivityAdvertisingViewingOfContact:(id)a0;
- (void)publishRequestToCreateContact:(id)a0;
- (void)updateUserActivityState:(id)a0 withContentsOfContact:(id)a1;
- (id)makeActivityAdvertisingViewingList;
- (id)initWithApplicationWorkspace:(id)a0;
- (void)publishRequestToEditContact:(id)a0;
- (id)initWithContactStore:(id)a0 applicationWorkspace:(id)a1 interactionDonor:(id)a2;
- (id)initWithContactStore:(id)a0;
- (id)initWithContactStore:(id)a0 applicationWorkspace:(id)a1;

@end
