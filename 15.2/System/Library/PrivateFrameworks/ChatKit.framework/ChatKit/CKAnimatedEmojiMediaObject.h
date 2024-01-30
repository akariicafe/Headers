@interface CKAnimatedEmojiMediaObject : CKAnimatedImageMediaObject

+ (id)UTITypes;
+ (BOOL)shouldShadePreview;
+ (BOOL)shouldScaleUpPreview;

- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)previewItemTitle;
- (id)backgroundColorOverride;
- (id)icon;
- (id)attachmentSummary:(unsigned long long)a0;
- (Class)previewBalloonViewClass;

@end
