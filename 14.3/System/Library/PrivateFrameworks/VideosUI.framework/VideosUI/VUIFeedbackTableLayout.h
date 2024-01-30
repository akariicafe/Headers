@class VUITextLayout;

@interface VUIFeedbackTableLayout : TVViewLayout

@property (readonly, nonatomic) VUITextLayout *headerTextLayout;
@property (readonly, nonatomic) VUITextLayout *descriptionTextLayout;
@property (readonly, nonatomic) double middleSpacing;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_setupLayout;

@end
