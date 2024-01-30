@class NSURL;

@interface MTLCaptureDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id captureObject;
@property (nonatomic) long long destination;
@property (copy, nonatomic) NSURL *outputURL;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
