@class AMSDeviceMessengerFilter;

@interface AMSDeviceUpdateHandlerInfo : NSObject

@property (retain, nonatomic) AMSDeviceMessengerFilter *filter;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;

@end
