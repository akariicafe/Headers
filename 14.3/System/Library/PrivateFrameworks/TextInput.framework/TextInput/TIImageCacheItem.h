@class NSData;

@interface TIImageCacheItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned char format;
@property (nonatomic) struct CGColor { } *formatColor;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ dataReleaseHandler;

+ (id)cacheItemWithSize:(struct CGSize { double x0; double x1; })a0 format:(unsigned char)a1 formatColor:(struct CGColor { } *)a2 scale:(double)a3 data:(id)a4;
+ (id)cacheItemWithSize:(struct CGSize { double x0; double x1; })a0 format:(unsigned char)a1 formatColor:(struct CGColor { } *)a2 scale:(double)a3 data:(id)a4 dataReleaseHandler:(id /* block */)a5;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_callDataReleaseHandler;
- (void)encodeWithCoder:(id)a0;

@end
