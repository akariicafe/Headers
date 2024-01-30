@class ATXHeuristicDevice;

@interface ATXPeopleSuggesterDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)peopleSuggestionsWithCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
