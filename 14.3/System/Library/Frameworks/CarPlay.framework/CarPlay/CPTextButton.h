@class NSString, NSUUID;
@protocol CPControlDelegate;

@interface CPTextButton : NSObject <CPControl, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) id<CPControlDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long textStyle;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)handlePrimaryAction;
- (void)handlePressesStart;
- (void)handlePressesEnd;
- (id)initWithTitle:(id)a0 textStyle:(long long)a1 handler:(id /* block */)a2;

@end
