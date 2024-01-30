@class NSString, MLFeatureValue;

@interface MLE5InputPortBinder : NSObject <MLE5PortBinder>

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (retain) MLFeatureValue *featureValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPort:(struct e5rt_io_port { } *)a0;
- (void).cxx_destruct;
- (BOOL)bindFeatureValue:(id)a0 error:(id *)a1;

@end
