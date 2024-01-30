@interface PKTextAttachmentDrawingViewProvider : NSTextAttachmentViewProvider

+ (BOOL)isSystemNoteTakingEnabled;
+ (Class)drawingClassForFileType:(id)a0;
+ (Class)drawingViewClassForDrawingClass:(Class)a0;
+ (void)registerViewProviderClassIfNecessary;
+ (Class)tiledViewClassForDrawingClass:(Class)a0;

- (void)loadView;

@end
