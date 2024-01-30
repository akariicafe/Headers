@class NSData;

@interface MPSCNNLossDataDescriptor : NSObject <NSCopying> {
    NSData *_data;
}

@property (readonly, nonatomic) unsigned long long layout;
@property (readonly, nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size;
@property (nonatomic) unsigned long long bytesPerRow;
@property (nonatomic) unsigned long long bytesPerImage;

+ (id)cnnLossDataDescriptorWithData:(id)a0 layout:(unsigned long long)a1 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)dealloc;

@end
