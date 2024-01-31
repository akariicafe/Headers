@class NSUUID, NSString, UIImage, CPImageSet;
@protocol CPMapButtonDelegate;

@interface CPMapButton : NSObject <CPControl, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) CPImageSet *imageSet;
@property (weak, nonatomic) id<CPMapButtonDelegate> controlDelegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *focusedImage;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handlePrimaryAction;

@end
