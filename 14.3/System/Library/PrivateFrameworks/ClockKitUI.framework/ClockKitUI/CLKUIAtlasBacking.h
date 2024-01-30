@class NSString, NSData, CLKUIMmapFile;

@interface CLKUIAtlasBacking : NSObject {
    NSData *_data;
    CLKUIMmapFile *_mmapFile;
}

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) const void *bytes;
@property (readonly, nonatomic) unsigned long long bytesLength;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long planes;
@property (readonly, nonatomic) unsigned long long planeLength;
@property (readonly, nonatomic) unsigned long long bytesPerPixel;
@property (readonly, nonatomic) unsigned long long mipCount;
@property (readonly, nonatomic) unsigned char format;
@property (readonly, nonatomic) BOOL mipmaps;
@property (nonatomic) unsigned char filter;
@property (nonatomic) unsigned char wrap;
@property (readonly, nonatomic) struct CLKUIAtlasBackingStructure { void *bytes; unsigned int bytesLength; unsigned int width; unsigned int height; unsigned int planes; unsigned int planeLength; unsigned int bytesPerPixel; unsigned int mipCount; unsigned char format; unsigned char filter; unsigned char wrap; BOOL mipmaps; } structure;

+ (id)atlasBackingWithArt:(id)a0 uuid:(id)a1;
+ (id)atlasBackingWithImage:(id)a0 uuid:(id)a1;
+ (id)atlasBackingWithImage:(id)a0 uuid:(id)a1 mipmap:(BOOL)a2;
+ (id)atlasBackingWithUuid:(id)a0 structure:(struct CLKUIAtlasBackingStructure { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; BOOL x11; })a1 data:(id)a2;
+ (id)atlasBackingWithBytes:(const void *)a0 length:(unsigned long long)a1 mmapFile:(id)a2 uuid:(id)a3;

- (const void *)bytes;
- (unsigned long long)width;
- (void)setFilter:(unsigned char)a0;
- (unsigned char)filter;
- (unsigned char)wrap;
- (void).cxx_destruct;
- (unsigned long long)bytesLength;
- (unsigned long long)bytesPerPixel;
- (unsigned long long)planes;
- (unsigned char)format;
- (unsigned long long)height;
- (void)setWrap:(unsigned char)a0;
- (BOOL)writeToFile:(id)a0 error:(id *)a1;
- (id)initWithUuid:(id)a0 structure:(struct CLKUIAtlasBackingStructure { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; BOOL x11; })a1 data:(id)a2;
- (id)initWithUuid:(id)a0 structure:(struct CLKUIAtlasBackingStructure { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; BOOL x11; })a1 mmapFile:(id)a2;
- (unsigned long long)planeLength;

@end
