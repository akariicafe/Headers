@class NSString;

@interface OSASymbolInfo : NSObject {
    unsigned char _uuid[16];
    NSString *legacy_arch;
}

@property unsigned long long start;
@property unsigned long long size;
@property (readonly) NSString *path;
@property (retain) NSString *name;
@property BOOL isAppleCode;
@property (retain) NSString *cpuArch;

- (id)get_uuid;
- (id)initWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 for:(unsigned char[16])a2;
- (void)setPath:(id)a0;
- (id)initWithSharedCache:(unsigned char[16])a0 atBaseAddress:(unsigned long long)a1;
- (void).cxx_destruct;

@end
