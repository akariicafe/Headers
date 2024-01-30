@interface HUGridServiceCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) double lineSpacing;
@property (nonatomic) double iconToTitleSpacing;
@property (nonatomic, getter=shouldShowIconOnly) BOOL showIconOnly;
@property (nonatomic, getter=shouldShowDescription) BOOL showDescription;
@property (nonatomic, getter=shouldShowAccessoryView) BOOL showAccessoryView;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
