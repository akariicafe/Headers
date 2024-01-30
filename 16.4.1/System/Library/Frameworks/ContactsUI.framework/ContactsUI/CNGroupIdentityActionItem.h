@class NSString, UIImage;
@protocol CNGroupIdentityActionItemDelegate;

@interface CNGroupIdentityActionItem : NSObject

@property (weak, nonatomic) id<CNGroupIdentityActionItemDelegate> delegate;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL shouldOverrideEnabledState;
@property (nonatomic) BOOL overrideEnabledState;
@property (nonatomic) BOOL shouldPresentDisambiguationUI;

+ (id)imageForSystemImageNamed:(id)a0;
+ (id)imageForSystemImageNamed:(id)a0 withPointSize:(double)a1;
+ (id)imageForSystemImageNamed:(id)a0 withTextStyle:(id)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 actionType:(id)a1 actionBlock:(id /* block */)a2;
- (id)initWithTitle:(id)a0 actionType:(id)a1 image:(id)a2 actionBlock:(id /* block */)a3;
- (id)initWithTitle:(id)a0 actionType:(id)a1 systemImageName:(id)a2 actionBlock:(id /* block */)a3;
- (id)initWithTitle:(id)a0 actionType:(id)a1 systemImageName:(id)a2 overrideEnabledState:(BOOL)a3 actionBlock:(id /* block */)a4;

@end
