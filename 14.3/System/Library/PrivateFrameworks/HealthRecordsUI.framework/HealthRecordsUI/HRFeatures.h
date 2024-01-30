@interface HRFeatures : NSObject

@property (class, nonatomic) BOOL hideCategoryNameFromHeader;
@property (class, nonatomic, readonly) BOOL shouldUseConsumerFriendlyName;
@property (class, nonatomic, readonly) BOOL shouldShowDescriptionFreeSpinner;

- (id)init;

@end
