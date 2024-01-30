@class NSString;

@interface MUPlaceURLActivityProvider : MUPlaceActivityProvider <UIActivityItemSource, UIActivityItemSocialSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailImageForActivityType:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (long long)activityViewController:(id)a0 attachmentULRTypeForActivityType:(id)a1;
- (id)activityViewController:(id)a0 thumbnailForActivityType:(id)a1;

@end
