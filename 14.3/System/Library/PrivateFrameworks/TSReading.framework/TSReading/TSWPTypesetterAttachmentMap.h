@class TSWPAttachment, TSDLayout;

@interface TSWPTypesetterAttachmentMap : NSObject

@property (nonatomic) TSWPAttachment *attachment;
@property (retain, nonatomic) TSDLayout *layout;
@property (readonly, nonatomic) struct __CTLine { } *lineRef;

+ (id)mapWithAttachment:(id)a0 layout:(id)a1 pageNumber:(unsigned long long)a2 pageCount:(unsigned long long)a3 footnoteMarkProvider:(id)a4 styleProvider:(id)a5 colorOverride:(id)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
