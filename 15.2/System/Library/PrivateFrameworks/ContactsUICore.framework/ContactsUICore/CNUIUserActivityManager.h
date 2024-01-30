@class CNContactStore, NSObject;
@protocol OS_os_log, CNLSApplicationWorkspace, CNUIInteractionDonor;

@interface CNUIUserActivityManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly, nonatomic) id<CNUIInteractionDonor> interactionDonor;

+ (id)descriptorForRequiredKeys;

- (void)updateUserActivityState:(id)a0 withContentsOfContact:(id)a1;
- (void)updateUserActivityState:(id)a0 withContentsOfListTopContact:(id)a1 displayedContact:(id)a2 searchString:(id)a3;
- (id)makeActivityAdvertisingViewingOfContact:(id)a0;
- (void)publishRequestToEditContact:(id)a0;
- (id)initWithApplicationWorkspace:(id)a0;
- (id)initWithContactStore:(id)a0 applicationWorkspace:(id)a1;
- (id)initWithContactStore:(id)a0 applicationWorkspace:(id)a1 interactionDonor:(id)a2;
- (id)makeActivityAdvertisingViewingList;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (void)publishRequestToCreateContact:(id)a0;

@end
