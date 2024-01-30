@class NSString, NSDictionary;

@interface IDSDeliveryControllerTimeMetric : NSObject <CUTRTCMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) double timeToSend;
@property (readonly, nonatomic) long long endpointCount;
@property (readonly, nonatomic) BOOL usedPipeline;
@property (readonly, nonatomic) BOOL usedMMCS;
@property (readonly, nonatomic) long long responseCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStartDate:(id)a0 endDate:(id)a1 endpointCount:(long long)a2 usedPipeline:(BOOL)a3 usedMMCS:(BOOL)a4 responseCode:(long long)a5;

@end
