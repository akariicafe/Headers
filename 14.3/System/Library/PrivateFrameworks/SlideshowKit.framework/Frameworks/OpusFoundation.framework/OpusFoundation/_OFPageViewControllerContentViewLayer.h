@class OFPageViewController;

@interface _OFPageViewControllerContentViewLayer : CALayer

@property (nonatomic) OFPageViewController *progressReportDelegate;
@property (nonatomic) double progress;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)dealloc;
- (id)initWithLayer:(id)a0;

@end
