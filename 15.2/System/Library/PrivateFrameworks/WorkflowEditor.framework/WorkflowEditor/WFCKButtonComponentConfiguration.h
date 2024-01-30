@class UIColor, NSString, UIImage, NSAttributedString;

@interface WFCKButtonComponentConfiguration : NSObject {
    struct array<CKStateConfiguration, 8> { struct CKStateConfiguration { NSString *title; NSAttributedString *attributedTitle; UIColor *titleColor; UIImage *image; UIImage *backgroundImage; } __elems_[8]; } _configurations;
    unsigned long long _precomputedHash;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;

@end
