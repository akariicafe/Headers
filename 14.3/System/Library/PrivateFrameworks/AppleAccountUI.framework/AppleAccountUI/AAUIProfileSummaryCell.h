@class AAUIProfileSummaryView;

@interface AAUIProfileSummaryCell : UITableViewCell {
    AAUIProfileSummaryView *_contentView;
}

+ (double)desiredHeight;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithName:(id)a0 email:(id)a1 image:(id)a2;

@end
