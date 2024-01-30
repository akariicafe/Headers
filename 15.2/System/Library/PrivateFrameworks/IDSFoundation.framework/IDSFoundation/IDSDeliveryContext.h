@class NSArray, NSString, NSData, NSError, NSNumber, NSDictionary;

@interface IDSDeliveryContext : NSObject

@property (copy, nonatomic) NSNumber *responseCommand;
@property (copy, nonatomic) NSNumber *responseTimeStamp;
@property (nonatomic) long long responseCode;
@property (copy, nonatomic) NSError *responseError;
@property (copy, nonatomic) NSData *responseToken;
@property (copy, nonatomic) NSError *deliveryError;
@property (copy, nonatomic) NSNumber *failureReason;
@property (copy, nonatomic) NSArray *displayIDs;
@property (nonatomic) long long idsResponseCode;
@property (nonatomic) BOOL lastCall;
@property (nonatomic) BOOL lastCourierAck;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSNumber *currentAverageRTT;
@property (copy, nonatomic) NSNumber *isDeviceBlackedOut;
@property (copy, nonatomic) NSNumber *localMessageState;
@property (copy, nonatomic) NSNumber *endpointState;
@property (copy, nonatomic) NSString *wpConnectionErrorDomain;
@property (copy, nonatomic) NSNumber *wpConnectionErrorCode;
@property (copy, nonatomic) NSDictionary *wpConnectionErrorUserInfo;

+ (long long)_endpointStateForServerDeliveryStatus:(id)a0;

- (id)initWithError:(id)a0;
- (id)initWithResponseCode:(long long)a0 deviceID:(id)a1 currentAverageRTT:(id)a2 isDeviceBlackedOut:(id)a3 localMessageState:(id)a4;
- (void).cxx_destruct;
- (id)initWithResponseCode:(long long)a0 deviceID:(id)a1;
- (id)initWithServerResponseDictionary:(id)a0;
- (id)initWithResponseCode:(long long)a0 error:(id)a1 lastCall:(BOOL)a2;

@end
