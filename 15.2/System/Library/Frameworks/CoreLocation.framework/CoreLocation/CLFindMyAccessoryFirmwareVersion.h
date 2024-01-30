@class NSString;

@interface CLFindMyAccessoryFirmwareVersion : NSObject {
    struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned char x8; } *_version;
}

@property (readonly) NSString *vanBurenVersion;
@property (readonly) NSString *rtKitVersion;
@property (readonly) NSString *specificationVersion;
@property (readonly) unsigned long long roseAPVersion;
@property (readonly) unsigned long long roseDSPVersion;
@property (readonly) unsigned long long hardwareVersion;
@property (readonly) unsigned long long calibrationDataVersion;

- (id)initWithData:(id)a0;
- (id)description;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)dealloc;

@end
