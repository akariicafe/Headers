@class NSArray;

@interface FASharedServicesResponse : AAResponse

@property (readonly, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSArray *serviceGroups;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (void)_sharedServicesWithNoGrouping:(id)a0;
- (void)_initializeServicesMapWithGroups:(id)a0 andServices:(id)a1;

@end
