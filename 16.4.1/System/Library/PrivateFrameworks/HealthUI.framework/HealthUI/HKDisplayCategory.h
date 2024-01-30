@class UIColor, NSString, UIImage, HKFillStyle;

@interface HKDisplayCategory : NSObject {
    id /* block */ _keyColor;
}

@property (readonly, nonatomic) long long categoryID;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *largeListIconName;
@property (readonly, nonatomic) NSString *listIconName;
@property (readonly, nonatomic) NSString *healthDataIconName;
@property (readonly, nonatomic) NSString *shareIconName;
@property (readonly, nonatomic) UIImage *largeListIcon;
@property (readonly, nonatomic) UIImage *listIcon;
@property (readonly, nonatomic) UIImage *healthDataIcon;
@property (readonly, nonatomic) UIImage *shareIcon;
@property (readonly, nonatomic) BOOL isMeCategory;
@property (readonly, nonatomic) BOOL isTopLevelCategory;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) HKFillStyle *fillStyle;

+ (id)topLevelCategoryIdentifiers;

- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
