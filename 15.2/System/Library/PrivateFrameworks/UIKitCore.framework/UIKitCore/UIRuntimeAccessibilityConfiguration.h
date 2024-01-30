@class NSString, NSNumber, NSObject;

@interface UIRuntimeAccessibilityConfiguration : NSObject

@property (retain, nonatomic) NSString *accessibilityConfigurationHint;
@property (retain, nonatomic) NSString *accessibilityConfigurationIdentifier;
@property (retain, nonatomic) NSString *accessibilityConfigurationLabel;
@property (retain, nonatomic) NSNumber *accessibilityConfigurationTraits;
@property (retain, nonatomic) NSNumber *isAccessibilityConfigurationElement;
@property (retain, nonatomic) NSObject *object;

- (id)initWithObject:(id)a0 label:(id)a1 identifier:(id)a2 hint:(id)a3 traits:(id)a4 andIsAccessibilityElement:(id)a5;
- (void)encodeWithCoder:(id)a0;
- (void)applyConfiguration;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0 label:(id)a1 hint:(id)a2 traits:(id)a3 andIsAccessibilityElement:(id)a4;

@end
