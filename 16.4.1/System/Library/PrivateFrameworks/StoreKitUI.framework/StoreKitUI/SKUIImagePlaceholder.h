@class UIColor;

@interface SKUIImagePlaceholder : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) double borderWidth;
@property (readonly, copy, nonatomic) id /* block */ cornerPathBlock;

- (void).cxx_destruct;
- (id)initWithBackgroundColor:(id)a0 borderColor:(id)a1 borderWidth:(double)a2 cornerPathBlock:(id /* block */)a3;
- (id)initWithBackgroundColor:(id)a0 borderColor:(id)a1 borderWidth:(double)a2 cornerRadius:(double)a3;

@end
