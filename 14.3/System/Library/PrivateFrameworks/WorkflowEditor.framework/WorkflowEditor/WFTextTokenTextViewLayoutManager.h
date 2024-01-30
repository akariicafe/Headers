@class NSString;

@interface WFTextTokenTextViewLayoutManager : NSLayoutManager <WFTextAttachmentSizeProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getPreferredLeadingSpacing:(double *)a0 trailingSpacing:(double *)a1 forDrawingTextAttachment:(id)a2 atCharacterIndex:(unsigned long long)a3;

@end
