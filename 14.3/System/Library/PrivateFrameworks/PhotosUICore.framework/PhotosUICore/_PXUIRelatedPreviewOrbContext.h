@class UIViewController;
@protocol PXRelatedEntry;

@interface _PXUIRelatedPreviewOrbContext : NSObject

@property (retain, nonatomic) UIViewController *previewViewController;
@property (retain, nonatomic) id<PXRelatedEntry> relatedEntry;

- (void).cxx_destruct;

@end
