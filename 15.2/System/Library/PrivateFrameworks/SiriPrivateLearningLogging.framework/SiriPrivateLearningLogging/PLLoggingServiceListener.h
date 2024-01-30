@class NSXPCListener;
@protocol NSXPCListenerDelegate;

@interface PLLoggingServiceListener : NSObject

@property (class, nonatomic, readonly) PLLoggingServiceListener *sharedInstance;

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) id<NSXPCListenerDelegate> delegate;

- (void).cxx_destruct;
- (id)init;

@end
