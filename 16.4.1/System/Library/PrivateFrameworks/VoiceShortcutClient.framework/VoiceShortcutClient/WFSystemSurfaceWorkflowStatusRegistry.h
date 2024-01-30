@class NSUserDefaults;

@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults;

- (BOOL)setStatusForServicesWorkflows:(unsigned long long)a0;
- (unsigned long long)statusForSystemSurface:(unsigned long long)a0;
- (BOOL)setStatus:(unsigned long long)a0 forSystemSurface:(unsigned long long)a1;
- (unsigned long long)statusForServicesWorkflows;
- (BOOL)setStatusForShareSheetWorkflows:(unsigned long long)a0;
- (id)init;
- (unsigned long long)statusForShareSheetWorkflows;
- (void).cxx_destruct;

@end
