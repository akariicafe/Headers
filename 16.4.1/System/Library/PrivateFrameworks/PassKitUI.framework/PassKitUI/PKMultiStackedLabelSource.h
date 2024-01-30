@class UIFont, NSString, UIColor, UIImage;
@protocol NSCopying;

@interface PKMultiStackedLabelSource : NSObject <NSCopying, PKIdentifiable>

@property (readonly, copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
