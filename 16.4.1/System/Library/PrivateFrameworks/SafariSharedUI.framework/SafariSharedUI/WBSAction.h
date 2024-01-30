@class NSString, UIImage;

@interface WBSAction : NSObject {
    id /* block */ _handler;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)actionWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 handler:(id /* block */)a3;
+ (id)toggleSectionExpandedAction;

- (void)performAction;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)makeUIAction;

@end
