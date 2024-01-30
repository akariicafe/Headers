@class NSArray, NSString;

@interface CHSConfiguredWidgetContainerDescriptor : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long location;
@property (readonly, nonatomic) unsigned long long page;
@property (readonly, nonatomic) long long widgetFamily;
@property (readonly, nonatomic, getter=isStack) BOOL stack;
@property (readonly, copy, nonatomic) NSArray *widgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithLocation:(long long)a0 page:(unsigned long long)a1 widgetFamily:(long long)a2 widgets:(id)a3;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
