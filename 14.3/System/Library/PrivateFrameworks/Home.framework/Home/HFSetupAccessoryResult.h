@class NSError, HMSetupAccessoryPayload;

@interface HFSetupAccessoryResult : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) HMSetupAccessoryPayload *setupPayload;
@property (readonly, nonatomic) BOOL hasAddRequest;
@property (readonly, nonatomic) BOOL isValidForPairing;

+ (BOOL)isHomeKitURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithSetupCode:(id)a0;
- (id)description;
- (BOOL)isAllZerosCode;
- (id)initWithPayload:(id)a0 error:(id)a1 hasAddRequest:(BOOL)a2;
- (id)initWithPayload:(id)a0 hasAddRequest:(BOOL)a1;
- (id)initWithSetupURL:(id)a0;

@end
