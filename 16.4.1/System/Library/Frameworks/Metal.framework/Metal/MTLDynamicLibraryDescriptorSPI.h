@class NSURL;
@protocol MTLLibrary;

@interface MTLDynamicLibraryDescriptorSPI : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLLibrary> library;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
