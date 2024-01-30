@class NSString;

@interface SKUITextLayout : NSObject <SKUICachedLayout> {
    struct __CTFramesetter { } *_framesetter;
}

@property (readonly, nonatomic) double lineHeight;
@property (readonly, nonatomic) BOOL requiresTruncation;
@property (readonly, nonatomic) struct __CTFrame { } *textFrame;
@property (readonly, nonatomic) struct CGSize { double width; double height; } textSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } truncatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct __CFAttributedString { } *)_newAttributedStringWithRequest:(id)a0;
+ (struct __CFAttributedString { } *)newAttributedStringWithText:(id)a0;

- (void)dealloc;
- (id)initWithLayoutRequest:(id)a0;

@end
