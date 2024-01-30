@class NSString, NSDictionary;

@interface IDSServerStorageStateMachineCompletedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) long long linkType;
@property (readonly, nonatomic) BOOL wasPrimary;
@property (readonly, nonatomic) double timeTaken;
@property (readonly, nonatomic) long long numberProcessed;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 linkType:(long long)a1 wasPrimary:(BOOL)a2 timeTaken:(double)a3 numberProcessed:(long long)a4;

@end
