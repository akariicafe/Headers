@class NSString, AMSURLSession;
@protocol AMSBagProtocol;

@interface AMSDeviceOfferEligibilityTask : NSObject

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSString *deviceGUID;
@property (retain, nonatomic) AMSURLSession *urlSession;
@property (readonly, nonatomic) NSString *masterSerialNumber;

- (void).cxx_destruct;
- (id)_accountEligibilityEncoderWithBag:(id)a0 account:(id)a1 clientInfo:(id)a2;
- (id)_accountEligibilityRequestParametersWithIdentifiers:(id)a0;
- (id)_deviceEligibilityEncoderWithBag:(id)a0 clientInfo:(id)a1;
- (id)_deviceEligibilityRequestParametersWithGroups:(id)a0;
- (id)_eligibilityRequest;
- (id)_offersDecodedFromResult:(id)a0;
- (id)initWithBag:(id)a0 deviceGUID:(id)a1 masterSerialNumber:(id)a2 urlSession:(id)a3;
- (id)performAccountEligibility:(id)a0 forOffers:(id)a1 clientInfo:(id)a2;
- (id)performAnonymousDeviceEligibility:(id)a0 clientInfo:(id)a1;

@end
