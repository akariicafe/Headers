@class NSString;

@interface BWBufferometerTracker : NSObject {
    long long _trackedSize;
    unsigned long long _trackingSerialNumber;
    void *_buffer;
    NSString *_tag;
    NSString *_bufferType;
}

- (void)dealloc;

@end
