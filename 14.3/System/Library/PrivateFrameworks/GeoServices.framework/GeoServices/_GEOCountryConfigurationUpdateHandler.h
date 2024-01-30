@class NSObject;
@protocol OS_dispatch_queue;

@interface _GEOCountryConfigurationUpdateHandler : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;

@end
