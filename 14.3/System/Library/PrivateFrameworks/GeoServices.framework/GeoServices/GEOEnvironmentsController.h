@class NSArray;
@protocol GEOEnvironmentsControllerDelegate;

@interface GEOEnvironmentsController : NSObject {
    NSArray *_defaultEnvironmentInfos;
    NSArray *_environmentInfos;
    NSArray *_customEnvironmentInfos;
    BOOL _enableCustomEnvironments;
}

@property (weak, nonatomic) id<GEOEnvironmentsControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadEnvironments;
- (id)activeEnvironment;
- (void)reloadEnvironments:(id /* block */)a0;
- (id)environmentInfosForSection:(long long)a0;
- (void)addCustomEnvironment:(id)a0;
- (id)initEnablingCustomEnvironments:(BOOL)a0;
- (void)removeCustomEnvironment:(id)a0;

@end
