@class NSSet;

@interface ATXWidgetLogUploadAllowList : NSObject {
    BOOL _allowListEnabled;
    NSSet *_allowedWidgetBundleIds;
}

- (id)initWithAssets:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)logUploadAllowedForWidgetBundleId:(id)a0;

@end
