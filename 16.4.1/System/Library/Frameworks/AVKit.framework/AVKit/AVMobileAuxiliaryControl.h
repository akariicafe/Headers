@class NSString, UIView;
@protocol AVMobileAuxiliaryControlDelegate;

@interface AVMobileAuxiliaryControl : NSObject

@property (weak, nonatomic) id<AVMobileAuxiliaryControlDelegate> delegate;
@property (readonly, nonatomic) UIView *controlView;
@property (readonly, nonatomic) long long displayPriority;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic) NSString *identifier;

+ (id)controlWithView:(id)a0 displayPriority:(long long)a1 identifier:(id)a2;
+ (id)controlWithDisplayPriority:(long long)a0 identifier:(id)a1;

- (BOOL)canOnlyAppearInOverflowMenu;
- (id)description;
- (void).cxx_destruct;

@end
