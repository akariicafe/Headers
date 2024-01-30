@class NSString, NSSet, BSSettings, FBSSceneSettings, NSDate, FBSSceneClientSettings;

@interface FBSceneSnapshotContext : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) FBSSceneSettings *settings;
@property (copy, nonatomic) FBSSceneClientSettings *clientSettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSSet *layersToExclude;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) BSSettings *clientExtendedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithFBSContext:(id)a0;

- (id)initWithScene:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithFBSContext:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
