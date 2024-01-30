@class NSString, UIImage;

@interface WBSStartPageCustomizationItem : NSObject

@property (readonly, nonatomic) id identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

+ (id)itemWithIdentifier:(id)a0 enabled:(BOOL)a1;
+ (id)itemWithIdentifier:(id)a0 title:(id)a1 icon:(id)a2 enabled:(BOOL)a3;

- (id)description;
- (void).cxx_destruct;
- (id)itemWithEnabled:(BOOL)a0;

@end
