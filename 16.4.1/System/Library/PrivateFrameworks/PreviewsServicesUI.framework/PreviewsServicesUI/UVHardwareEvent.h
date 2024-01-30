@class NSData;

@interface UVHardwareEvent : NSObject

@property (readonly, nonatomic) NSData *data;

- (id)initWithData:(id)a0 error:(id *)a1;

@end
