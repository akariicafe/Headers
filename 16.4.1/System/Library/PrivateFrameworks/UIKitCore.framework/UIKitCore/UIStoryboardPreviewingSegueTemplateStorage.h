@class UIStoryboardPreviewingSegueTemplate, UIStoryboardSegueTemplate, UIView;

@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <NSCoding>

@property (weak, nonatomic) UIView *sender;
@property (weak, nonatomic) UIStoryboardPreviewingSegueTemplate *previewTemplate;
@property (weak, nonatomic) UIStoryboardSegueTemplate *commitTemplate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
