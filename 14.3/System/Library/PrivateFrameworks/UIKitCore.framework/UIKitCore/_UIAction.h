@class NSString, UIImage;

@interface _UIAction : NSObject <_UIActionGroupable>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL requiresAuthenticatedInput;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithTitle:(id)a0 image:(id)a1 style:(long long)a2 handler:(id /* block */)a3;

- (void)performAction;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithWithTitle:(id)a0 image:(id)a1 style:(long long)a2 handler:(id /* block */)a3;
- (id)_apiRepresentation;

@end
