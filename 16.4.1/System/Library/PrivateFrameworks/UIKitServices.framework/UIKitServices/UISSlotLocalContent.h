@class NSString;

@interface UISSlotLocalContent : NSObject <UISSlotAnyContent> {
    unsigned char _contentScale;
    struct CGSize { double width; double height; } _contentSize;
    struct CGImage { } *_localImage;
}

@property (readonly, nonatomic) unsigned char contentScale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) BOOL shouldReplaceExistingContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentWithDrawing:(id)a0 style:(id)a1;
+ (id)contentWithDrawing:(id)a0 scale:(unsigned char)a1 range:(unsigned long long)a2;
+ (id)contentWithImage:(struct CGImage { } *)a0 scale:(unsigned char)a1;

- (void)dealloc;
- (id)image;
- (void)deleteFromLayerContext:(id)a0;
- (id)initWithDrawing:(id)a0 scale:(unsigned char)a1 range:(unsigned long long)a2;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(unsigned char)a1;

@end
