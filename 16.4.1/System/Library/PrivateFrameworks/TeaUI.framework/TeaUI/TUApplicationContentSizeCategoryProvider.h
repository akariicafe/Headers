@class NSString;

@interface TUApplicationContentSizeCategoryProvider : NSObject <TUContentSizeCategoryProviderType>

@property (nonatomic, readonly) NSString *currentContentSizeCategory;

- (id)init;

@end
