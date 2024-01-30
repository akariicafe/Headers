@class NSString;

@interface AMDCoreDataFeatureProvider : NSObject <AMDFeatureProvider>

@property (retain, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (id)getFeatureWithName:(id)a0;

@end
