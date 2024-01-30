@class NSMutableSet, NSMutableDictionary;

@interface DKReportingConcurrentRequestGroup : NSObject

@property (retain, nonatomic) NSMutableSet *resources;
@property (retain, nonatomic) NSMutableSet *requests;
@property (retain, nonatomic) NSMutableDictionary *requestLookupByGenerator;

- (void).cxx_destruct;
- (id)init;
- (BOOL)addComponentIdentity:(id)a0 usingGenerator:(id)a1;

@end
