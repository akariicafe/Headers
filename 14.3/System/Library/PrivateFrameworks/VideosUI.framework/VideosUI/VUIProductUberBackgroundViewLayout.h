@class TVImageLayout;

@interface VUIProductUberBackgroundViewLayout : TVViewLayout {
    long long _sizeClass;
}

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) TVImageLayout *imageLayout;

+ (double)uberImageAspectRatioForWindowWidth:(double)a0;
+ (id)layoutWithLayout:(id)a0 element:(id)a1 sizeClass:(long long)a2 type:(unsigned long long)a3;
+ (BOOL)uberImageShouldUseVerticalLayoutForWindowWidth:(double)a0;
+ (BOOL)uberImageShouldUsePhoneImageForSizeClass:(long long)a0;

- (void).cxx_destruct;
- (id)initWithSizeClass:(long long)a0 type:(unsigned long long)a1;
- (void)_updateWithSizeClass:(long long)a0 type:(unsigned long long)a1;
- (void)updateWithSizeClass:(long long)a0;

@end
