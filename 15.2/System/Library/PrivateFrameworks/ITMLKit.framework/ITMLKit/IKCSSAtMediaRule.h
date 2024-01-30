@class IKCSSMediaQuery;

@interface IKCSSAtMediaRule : IKCSSRule <NSCopying> {
    IKCSSMediaQuery *_mediaQuery;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } queryRange;

- (id)mediaQuery;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaQuery:(id)a0;

@end
