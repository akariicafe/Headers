@class ATXHeuristicDevice;
@protocol _DKKnowledgeQuerying;

@interface ATXAppLaunchCountDataSource : NSObject {
    ATXHeuristicDevice *_device;
    id<_DKKnowledgeQuerying> _duetStore;
}

- (id)initWithDevice:(id)a0;
- (void)appLaunchCountForBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2 limit:(unsigned long long)a3 callback:(id /* block */)a4;
- (void).cxx_destruct;

@end
