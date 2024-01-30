@class NSString, NSNumber, NSDictionary;

@interface IDSNoteMessageReceivedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSNumber *accountType;
@property (readonly, nonatomic) BOOL fromStorage;
@property (readonly, nonatomic) double serverTimestamp;
@property (readonly, nonatomic) double localTimeDelta;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 accountType:(id)a1 fromStorage:(BOOL)a2 serverTimestamp:(double)a3 localTimeDelta:(double)a4;

@end
