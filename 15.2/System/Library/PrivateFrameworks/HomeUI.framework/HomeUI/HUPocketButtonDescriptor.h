@class UIColor, NSString;
@protocol NSCopying;

@interface HUPocketButtonDescriptor : NSObject

@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id<NSCopying> userInfo;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (copy, nonatomic) id /* block */ block;

+ (id)descriptorWithTitle:(id)a0 style:(unsigned long long)a1 target:(id)a2 action:(SEL)a3 userInfo:(id)a4;
+ (id)descriptorWithTitle:(id)a0 style:(unsigned long long)a1 userInfo:(id)a2 block:(id /* block */)a3;

- (void)execute;
- (void).cxx_destruct;

@end
