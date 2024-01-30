@class NSDate, NSError, HMDMediaPropertyRequest, NSNumber;

@interface HMDMediaPropertyResponse : HMFObject

@property (readonly, nonatomic) HMDMediaPropertyRequest *request;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSNumber *stateNumber;
@property (readonly, nonatomic) NSDate *valueUpdatedTime;

+ (id)responsesFromSerializedResponse:(id)a0 requests:(id)a1 home:(id)a2;
+ (id)responseWithRequest:(id)a0 error:(id)a1;
+ (id)propertyResponsesFromRequests:(id)a0 error:(id)a1;
+ (id)serializeResponses:(id)a0;
+ (id)responseWithRequest:(id)a0 value:(id)a1 updatedTime:(id)a2 stateNumber:(id)a3;
+ (id)groupedProfileResponses:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 value:(id)a1 updatedTime:(id)a2 stateNumber:(id)a3;

@end
