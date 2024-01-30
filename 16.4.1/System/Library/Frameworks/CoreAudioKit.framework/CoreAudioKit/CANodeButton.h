@class NSURL;

@interface CANodeButton : UIButton {
    BOOL hasLabel;
}

@property (retain) NSURL *url;
@property BOOL hasLabel;

- (void)dealloc;
- (void)layoutSubviews;
- (id)init;

@end
