@class VUIStoreAcquisitionProperties;

@interface VUIAcquisitionRequest : NSObject

@property (copy, nonatomic) VUIStoreAcquisitionProperties *properties;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (getter=isCancelled) BOOL cancelled;

- (void).cxx_destruct;

@end
