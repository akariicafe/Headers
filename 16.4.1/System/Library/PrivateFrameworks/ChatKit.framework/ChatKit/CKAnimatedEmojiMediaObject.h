@interface CKAnimatedEmojiMediaObject : CKAnimatedImageMediaObject

+ (id)UTITypes;
+ (BOOL)shouldScaleUpPreview;
+ (BOOL)shouldShadePreview;

- (id)icon;
- (id)backgroundColorOverride;
- (id)previewItemTitle;
- (id)attachmentSummary:(unsigned long long)a0;
- (Class)previewBalloonViewClass;
- (id)previewForWidth:(double)a0 orientation:(char)a1;

@end
