@class UIImage, UIColor, NSString;

@interface UIPreviewAction : NSObject <UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem>

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_checkmarkImage;
+ (id)_actionWithPreviewMenuItem:(id)a0;
+ (id)_actionWithTitle:(id)a0 color:(id)a1 image:(id)a2 handler:(id /* block */)a3;
+ (id)_actionWithTitle:(id)a0 style:(long long)a1 color:(id)a2 image:(id)a3 handler:(id /* block */)a4;
+ (id)_actionWithTitle:(id)a0 style:(long long)a1 image:(id)a2 handler:(id /* block */)a3;
+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

@end
