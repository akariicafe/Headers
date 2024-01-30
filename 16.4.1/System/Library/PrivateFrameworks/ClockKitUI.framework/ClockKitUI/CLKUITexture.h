@class NSString, CLKUIAtlas;

@interface CLKUITexture : NSObject

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) CLKUIAtlas *atlas;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ rect;
@property (readonly, nonatomic, getter=isNull) BOOL null;

+ (id)textureWithProviderDelegate:(id)a0 uuid:(id)a1;
+ (id)textureWithProviderDelegate:(SEL)a0 uuid:(id)a1 rect:(id)a2;
+ (id)nullTextureCube;
+ (id)nullTexture2D;
+ (id)textureWithProviderDelegate:(id)a0 uuid:(id)a1 nullTexture:(id)a2;
+ (id)textureWithProviderDelegate:(SEL)a0 uuid:(id)a1 rect:(id)a2 nullTexture:(id)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAtlas:(SEL)a0 rect:(id)a1;

@end
