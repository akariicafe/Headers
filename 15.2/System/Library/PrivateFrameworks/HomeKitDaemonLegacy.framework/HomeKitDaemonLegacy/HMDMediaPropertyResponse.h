@class HMDMediaPropertyRequest, NSError, NSDate;

@interface HMDMediaPropertyResponse : HMFObject

@property (readonly, nonatomic) HMDMediaPropertyRequest *request;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *valueUpdatedTime;

+ (id)serializeResponses:(id)a0;
+ (id)propertyResponsesFromRequests:(id)a0 error:(id)a1;
+ (id)responsesFromSerializedResponse:(id)a0 requests:(id)a1 home:(id)a2;
+ (id)responseWithRequest:(id)a0 value:(id)a1 updatedTime:(id)a2;
+ (id)responseWithRequest:(id)a0 error:(id)a1;
+ (id)groupedProfileResponses:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 value:(id)a1 updatedTime:(id)a2;

@end
