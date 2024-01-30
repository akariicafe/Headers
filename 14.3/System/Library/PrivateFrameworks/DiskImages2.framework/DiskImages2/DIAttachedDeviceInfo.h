@class NSString, NSURL;

@interface DIAttachedDeviceInfo : NSObject

@property (readonly) NSString *BSDname;
@property (readonly) NSURL *imageURL;

+ (id)newDevicesArrayWithError:(id *)a0;
+ (id)copyImageURLFromDevice:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithService:(unsigned int)a0 error:(id *)a1;

@end
