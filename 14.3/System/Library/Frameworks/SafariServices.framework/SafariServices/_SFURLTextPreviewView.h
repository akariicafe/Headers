@class NSURL, UILabel;

@interface _SFURLTextPreviewView : UIView {
    UILabel *_domainLabel;
    UILabel *_urlLabel;
}

@property (copy, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
