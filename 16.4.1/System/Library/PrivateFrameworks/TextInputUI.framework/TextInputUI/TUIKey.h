@class NSString, UIKBTree;

@interface TUIKey : NSObject

@property (retain, nonatomic) UIKBTree *backingTree;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIKBTree *keyplane;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paddedFrame;
@property (readonly, nonatomic) NSString *representedString;
@property (nonatomic) double multiplier;
@property (nonatomic) long long layoutType;
@property (nonatomic) long long layoutShape;
@property (nonatomic) BOOL inGridLayout;

+ (id)keyFromKBTree:(id)a0;
+ (id)keyFromKBTree:(id)a0 layoutType:(long long)a1 layoutShape:(long long)a2 multiplier:(double)a3;

- (id)description;
- (void).cxx_destruct;
- (id)stringFromLayoutType:(long long)a0;
- (id)stringFromShape:(long long)a0;

@end
