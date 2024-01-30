@class NSString, CHSWidgetDescriptor, INIntent;

@interface ATXComplication : NSObject <NSSecureCoding, NSCopying, CHSWidgetPersonality>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double score;
@property (copy, nonatomic) NSString *predictionSource;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) long long widgetFamily;
@property (readonly, nonatomic) INIntent *intent;
@property (nonatomic) int source;
@property (readonly, copy, nonatomic) CHSWidgetDescriptor *widgetDescriptor;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForComplicationSource:(int)a0;
+ (id)complicationFromDictionaryRepresentation:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)matchesPersonality:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 containerBundleIdentifier:(id)a2 widgetFamily:(long long)a3 intent:(id)a4 source:(int)a5;
- (id)dictionaryRepresentation;
- (id)initWithWidgetDescriptor:(id)a0 widgetFamily:(long long)a1 intent:(id)a2 source:(int)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithWidgetDescriptor:(id)a0 widgetFamily:(long long)a1 intent:(id)a2;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1 containerBundleIdentifier:(id)a2 widgetFamily:(long long)a3 intent:(id)a4;
- (BOOL)isEqualToATXComplication:(id)a0;
- (void).cxx_destruct;

@end
