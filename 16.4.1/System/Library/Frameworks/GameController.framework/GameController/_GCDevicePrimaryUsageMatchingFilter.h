@class NSString, NSNumber;

@interface _GCDevicePrimaryUsageMatchingFilter : NSObject <_GCDeviceMatchingFilter> {
    NSNumber *_primaryUsagePage;
    NSNumber *_primaryUsage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
