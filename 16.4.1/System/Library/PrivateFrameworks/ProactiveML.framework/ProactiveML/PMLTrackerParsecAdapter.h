@class NSString;

@interface PMLTrackerParsecAdapter : NSObject <PMLTrackerAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrappedMessage:(id)a0;
+ (BOOL)_writeDataForTransparency:(id)a0;

- (void)postMetricId:(unsigned int)a0 message:(id)a1;

@end
