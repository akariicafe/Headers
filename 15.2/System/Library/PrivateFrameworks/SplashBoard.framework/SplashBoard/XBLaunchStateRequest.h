@class FBSDisplayConfiguration, NSString, XBDisplayEdgeInsetsWrapper;

@interface XBLaunchStateRequest : NSObject <BSXPCCoding, NSCopying, BSDescriptionProviding>

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets;
@property (nonatomic) unsigned long long statusBarState;
@property (copy, nonatomic) NSString *urlSchemeName;
@property (copy, nonatomic) NSString *launchInterfaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
