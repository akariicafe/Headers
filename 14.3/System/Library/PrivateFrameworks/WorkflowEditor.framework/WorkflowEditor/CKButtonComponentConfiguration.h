@class NSString, UIColor, UIImage;

@interface CKButtonComponentConfiguration : NSObject {
    struct array<CKStateConfiguration, 8> { struct CKStateConfiguration { NSString *title; UIColor *titleColor; UIImage *image; UIImage *backgroundImage; } __elems_[8]; } _configurations;
    unsigned long long _precomputedHash;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;

@end
