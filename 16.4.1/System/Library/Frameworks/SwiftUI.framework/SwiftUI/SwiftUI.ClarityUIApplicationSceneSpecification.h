@class NSString, NSArray;

@interface SwiftUI.ClarityUIApplicationSceneSpecification : UIApplicationSceneSpecification

@property (nonatomic, readonly) Class settingsClass;
@property (nonatomic, readonly) Class clientSettingsClass;
@property (nonatomic, readonly) NSString *uiSceneSessionRole;
@property (nonatomic, readonly) Class uiSceneMinimumClass;
@property (nonatomic, readonly) NSArray *initialSettingsDiffActions;
@property (nonatomic, readonly) NSArray *initialActionHandlers;

- (id)init;

@end
