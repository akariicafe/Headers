@class NSXPCListener;
@protocol NSXPCListenerDelegate;

@interface PLLoggingServiceListener : NSObject

@property (class, nonatomic, readonly) PLLoggingServiceListener *sharedInstance;

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) id<NSXPCListenerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;

@end
