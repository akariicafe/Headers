@class NSString, NSNumber, NSArray;

@interface _GCDevicePIDVIDMatchingFilter : NSObject <_GCDeviceMatchingFilter> {
    NSNumber *_vendorID;
    NSArray *_productIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
