@class NSMutableSet, NSMutableDictionary;

@interface DKReportingConcurrentRequestGroup : NSObject

@property (retain, nonatomic) NSMutableSet *resources;
@property (retain, nonatomic) NSMutableSet *requests;
@property (retain, nonatomic) NSMutableDictionary *requestLookupByGenerator;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addComponentIdentity:(id)a0 usingGenerator:(id)a1;

@end
