@class NSString;

@interface VIACacheHitEvent : NSObject <VIAEvent>

@property (readonly, nonatomic) unsigned long long cachedResultQueryID;
@property (readonly, nonatomic) unsigned long long queryID;
@property (readonly, copy, nonatomic) NSString *originatingApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feedback;
- (void).cxx_destruct;
- (id)initWithQueryID:(unsigned long long)a0 cachedResultQueryID:(unsigned long long)a1 originatingApplication:(id)a2;

@end
