@interface WFPosterPickerParameter : WFParameter

@property (readonly, nonatomic) BOOL shouldOnlyShowEligiblePhotosPosters;
@property (readonly, nonatomic) BOOL handlesDefaultPoster;

- (Class)singleStateClass;

@end
