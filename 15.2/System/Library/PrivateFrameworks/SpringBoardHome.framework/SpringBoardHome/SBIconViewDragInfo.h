@class NSString, NSURL, NSArray;

@interface SBIconViewDragInfo : NSObject <NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSURL *launchURL;
@property (nonatomic) long long startLocation;
@property (copy, nonatomic) NSString *activeCustomIconDataSourceUniqueIdentifier;
@property (copy, nonatomic) NSArray *customIconDataSourceConfigurations;
@property (nonatomic) unsigned long long gridSizeClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;

@end
