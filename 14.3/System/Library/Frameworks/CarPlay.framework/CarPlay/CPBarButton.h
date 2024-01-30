@class UIImage, NSString, NSUUID;
@protocol CPBarButtonDelegate;

@interface CPBarButton : NSObject <CPControl, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) id<CPBarButtonDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long buttonStyle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long buttonType;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)handlePrimaryAction;
- (void)handlePressesStart;
- (void)handlePressesEnd;
- (id)initWithImage:(id)a0 handler:(id /* block */)a1;
- (id)initWithType:(unsigned long long)a0 handler:(id /* block */)a1;

@end
