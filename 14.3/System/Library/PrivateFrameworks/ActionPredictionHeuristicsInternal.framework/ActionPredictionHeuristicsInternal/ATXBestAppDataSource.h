@class UABestAppSuggestionManager, ATXHeuristicDevice;

@interface ATXBestAppDataSource : NSObject {
    ATXHeuristicDevice *_device;
    UABestAppSuggestionManager *_bestAppSuggestionManager;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)bestAppSuggestionWithCallback:(id /* block */)a0;

@end
