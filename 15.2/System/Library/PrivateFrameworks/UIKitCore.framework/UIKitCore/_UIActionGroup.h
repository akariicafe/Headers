@class NSString, UIImage, NSArray;

@interface _UIActionGroup : NSObject <_UIActionGroupable>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (nonatomic) long long style;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *children;
@property (nonatomic) BOOL inlineGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupWithTitle:(id)a0 image:(id)a1 style:(long long)a2 children:(id)a3;

@end
