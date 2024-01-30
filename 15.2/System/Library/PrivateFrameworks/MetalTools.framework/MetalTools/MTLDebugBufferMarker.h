@class NSString;

@interface MTLDebugBufferMarker : NSObject

@property (copy, nonatomic) NSString *label;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void)dealloc;

@end
