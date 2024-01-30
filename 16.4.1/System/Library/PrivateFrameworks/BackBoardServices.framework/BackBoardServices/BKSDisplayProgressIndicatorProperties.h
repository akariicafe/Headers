@class NSString;

@interface BKSDisplayProgressIndicatorProperties : NSObject <NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)progressIndicatorWithStyle:(long long)a0 position:(struct CGPoint { double x0; double x1; })a1;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_initWithStyle:(long long)a0 position:(struct CGPoint { double x0; double x1; })a1;

@end
