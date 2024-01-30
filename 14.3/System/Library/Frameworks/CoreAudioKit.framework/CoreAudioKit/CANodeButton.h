@class NSURL;

@interface CANodeButton : UIButton {
    BOOL hasLabel;
}

@property (retain) NSURL *url;
@property BOOL hasLabel;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;

@end
