@interface SHSheetActivityPresentationContext : NSObject

@property (nonatomic) BOOL shouldDismissBeforePresentation;
@property (nonatomic) BOOL shouldPresentOverCurrentContext;
@property (nonatomic) BOOL isCloudSharing;

- (id)description;

@end
