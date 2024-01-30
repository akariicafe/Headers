@class NSString, MLFeatureDescription, MLFeatureValue;
@protocol MLE5PortBinder;

@interface MLE5IOPort : NSObject {
    MLFeatureValue *_inputFeatureValue;
}

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (readonly) MLFeatureDescription *featureDescription;
@property (retain) id<MLE5PortBinder> binder;
@property (readonly) NSString *name;
@property (retain) MLFeatureValue *featureValue;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPortHandle:(struct e5rt_io_port { } *)a0 name:(id)a1 featureDescription:(id)a2;
- (BOOL)prepareAndReturnError:(id *)a0;

@end
