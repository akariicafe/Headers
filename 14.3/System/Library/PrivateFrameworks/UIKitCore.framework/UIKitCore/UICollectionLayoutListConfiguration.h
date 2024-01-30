@class UIColor;

@interface UICollectionLayoutListConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) long long appearance;
@property (nonatomic) BOOL showsSeparators;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ leadingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ trailingSwipeActionsConfigurationProvider;
@property (nonatomic) long long headerMode;
@property (nonatomic) long long footerMode;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_spiConfiguration;
- (id)initWithAppearance:(long long)a0;

@end
