@class NSArray, NSUUID, UIImage, NSString, CPImageSet;
@protocol CPControlDelegate;

@interface CPGridButton : NSObject <CPControl, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) CPImageSet *imageSet;
@property (weak, nonatomic) id<CPControlDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSArray *titleVariants;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void)handlePrimaryAction;
- (id)initWithTitleVariants:(id)a0 image:(id)a1 handler:(id /* block */)a2;

@end
