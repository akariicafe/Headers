@class NSString, AVWeakReference, NSNumber;

@interface AVExternalDeviceHIDInternal : NSObject {
    AVWeakReference *weakReferenceToExternalDevice;
    NSString *UUID;
    NSString *screenID;
    NSNumber *inputMode;
}

@end
