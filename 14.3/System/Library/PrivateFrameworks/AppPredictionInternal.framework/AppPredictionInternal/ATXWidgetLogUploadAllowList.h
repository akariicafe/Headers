@class NSSet;

@interface ATXWidgetLogUploadAllowList : NSObject {
    BOOL _allowListEnabled;
    NSSet *_allowedWidgetBundleIds;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0;
- (BOOL)logUploadAllowedForWidgetBundleId:(id)a0;

@end
