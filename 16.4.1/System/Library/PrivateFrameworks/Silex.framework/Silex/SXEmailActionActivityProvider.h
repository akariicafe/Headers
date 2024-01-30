@class NSString;
@protocol SXContactsPresenter, SXMailPresenter;

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider>

@property (readonly, nonatomic) id<SXMailPresenter> mailPresenter;
@property (readonly, nonatomic) id<SXContactsPresenter> contactsPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)a0;
- (void)addToContacts:(id)a0;
- (void)composeMailTo:(id)a0 subject:(id)a1;
- (id)initWithMailPresenter:(id)a0 contactsPresenter:(id)a1;

@end
