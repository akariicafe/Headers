@class PKPassGroupView, PKPeerPaymentAccount, NSString;

@interface PKDashboardPassGroupItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) PKPassGroupView *groupView;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithGroupView:(id)a0;

@end
