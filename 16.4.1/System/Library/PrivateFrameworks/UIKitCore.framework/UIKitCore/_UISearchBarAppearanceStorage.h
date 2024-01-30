@class NSValue, UIImage, NSMutableDictionary;

@interface _UISearchBarAppearanceStorage : NSObject {
    NSMutableDictionary *searchFieldBackgroundImages;
    NSMutableDictionary *iconImages;
}

@property (retain, nonatomic) NSValue *searchFieldPositionAdjustment;
@property (retain, nonatomic) UIImage *separatorImage;
@property (retain, nonatomic) UIImage *scopeBarBackgroundImage;

- (id)searchFieldBackgroundImageForState:(unsigned long long)a0;
- (void)setSearchFieldBackgroundImage:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)imageForIcon:(long long)a0 state:(unsigned long long)a1;
- (void)setImage:(id)a0 forIcon:(long long)a1 state:(unsigned long long)a2;

@end
