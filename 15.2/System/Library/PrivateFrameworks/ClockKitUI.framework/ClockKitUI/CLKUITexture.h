@class NSString, CLKUIAtlas;

@interface CLKUITexture : NSObject

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) CLKUIAtlas *atlas;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ rect;

+ (id)textureWithProviderDelegate:(id)a0 uuid:(id)a1;
+ (id)textureWithProviderDelegate:(SEL)a0 uuid:(id)a1 rect:(id)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAtlas:(SEL)a0 rect:(id)a1;

@end
