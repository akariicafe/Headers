@class NSString, CPTemplate, UIImage, NSUUID, CPImageSet;
@protocol CPControlDelegate;

@interface CPButton : NSObject <CPControl, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) id<CPControlDelegate> delegate;
@property (retain, nonatomic) CPImageSet *imageSet;
@property (weak, nonatomic) CPTemplate *associatedTemplate;
@property (readonly, copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)handlePressesEnd;
- (void)handlePressesStart;
- (void)handlePrimaryAction;
- (id)initWithImage:(id)a0 handler:(id /* block */)a1;

@end
