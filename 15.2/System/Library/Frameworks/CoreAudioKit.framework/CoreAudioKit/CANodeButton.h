@class NSURL;

@interface CANodeButton : UIButton {
    BOOL hasLabel;
}

@property (retain) NSURL *url;
@property BOOL hasLabel;

- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

@end
