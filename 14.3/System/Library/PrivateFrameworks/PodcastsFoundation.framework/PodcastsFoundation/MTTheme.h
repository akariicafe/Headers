@class NSString, UIColor;

@interface MTTheme : NSManagedObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (nonatomic) BOOL isBackgroundLight;

@end
