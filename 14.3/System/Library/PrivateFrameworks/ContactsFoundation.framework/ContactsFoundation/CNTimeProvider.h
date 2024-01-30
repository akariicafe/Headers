@class NSString;
@protocol CNTimeProvider;

@interface CNTimeProvider : NSObject <CNTimeProvider>

@property (class, readonly) id<CNTimeProvider> defaultProvider;

@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
