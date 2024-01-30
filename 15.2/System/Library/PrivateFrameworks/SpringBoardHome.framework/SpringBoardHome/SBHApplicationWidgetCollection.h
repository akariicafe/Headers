@class NSString, SBLeafIcon, NSArray;

@interface SBHApplicationWidgetCollection : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) SBLeafIcon *icon;
@property (retain, nonatomic) NSArray *avocadoDescriptors;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) NSString *collectionIdentifier;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *iconImageApplicationBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithIcon:(id)a0 galleryItems:(id)a1 vendorName:(id)a2;

@end
