@class ISIcon;

@interface ISIconLayer : CALayer <ISIconManagerObserver> {
    unsigned long long _shape;
}

@property (retain, nonatomic) ISIcon *icon;
@property (nonatomic) unsigned long long variantOptions;
@property (nonatomic) unsigned long long badgeOptions;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long iconShape;
@property (nonatomic) BOOL shouldApplyMask;
@property (nonatomic) BOOL drawBorder;

- (id)initWithIcon:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)iconManager:(id)a0 didInvalidateIcons:(id)a1;

@end
