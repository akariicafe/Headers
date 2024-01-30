@class NSError;

@interface TXRTextureInfo : NSObject

@property (nonatomic) unsigned long long alphaInfo;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (nonatomic) unsigned long long mipmapLevelCount;
@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) BOOL cubemap;
@property (readonly) NSError *error;

- (void).cxx_destruct;

@end
