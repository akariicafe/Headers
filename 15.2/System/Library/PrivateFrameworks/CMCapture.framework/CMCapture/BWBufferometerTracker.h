@class NSString;

@interface BWBufferometerTracker : NSObject {
    long long _trackedSize;
    unsigned long long _trackingSerialNumber;
    void *_buffer;
    NSString *_tag;
    NSString *_bufferType;
}

+ (void)trackBuffer:(void *)a0 trackedSize:(long long)a1 tag:(id)a2 bufferType:(id)a3;
+ (void)trackBuffer:(void *)a0 trackedSize:(long long)a1;

- (void)dealloc;
- (id)initWithBuffer:(void *)a0 trackedSize:(long long)a1 tag:(id)a2 bufferType:(id)a3;

@end
