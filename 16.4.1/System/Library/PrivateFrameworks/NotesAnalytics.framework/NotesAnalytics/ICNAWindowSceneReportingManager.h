@class NSMutableDictionary;

@interface ICNAWindowSceneReportingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventReporters;
@property (readonly, nonatomic) BOOL hasActiveWindowScenes;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)windowSceneDidEnd:(id)a0;
- (void)windowSceneMayBeResized:(id)a0;
- (void)windowSceneWillBegin:(id)a0;

@end
