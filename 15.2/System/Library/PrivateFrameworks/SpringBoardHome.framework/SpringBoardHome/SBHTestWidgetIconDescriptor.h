@class NSString;

@interface SBHTestWidgetIconDescriptor : NSObject <SBHTestWidgetIconDescriptor>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) NSString *widgetIdentifier;
@property (readonly, nonatomic) unsigned long long sizeClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)widgetIconDescriptorFromDictionary:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)sbh_iconDescriptorType;
- (BOOL)sbh_isValidWithError:(id *)a0;
- (id)initWithBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1 widgetIdentifier:(id)a2 sizeClass:(unsigned long long)a3;

@end
