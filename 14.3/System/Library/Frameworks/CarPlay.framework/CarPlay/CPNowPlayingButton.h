@class NSUUID, NSString;
@protocol CPControlDelegate;

@interface CPNowPlayingButton : NSObject <CPControl, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) id<CPControlDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHandler:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void)handlePrimaryAction;

@end
