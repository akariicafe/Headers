@class NSString, MLFeatureValue, NSObject, MLFeatureDescription;
@protocol OS_dispatch_queue;

@interface MLE5OutputPortBinder : NSObject <MLE5PortBinder> {
    MLFeatureValue *_featureValue;
}

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (readonly) MLFeatureDescription *featureDescription;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) id outputBacking;
@property (readonly) MLFeatureValue *featureValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
