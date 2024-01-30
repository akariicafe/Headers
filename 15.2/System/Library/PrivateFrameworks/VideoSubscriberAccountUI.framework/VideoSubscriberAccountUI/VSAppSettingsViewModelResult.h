@class NSArray;

@interface VSAppSettingsViewModelResult : NSObject

@property (copy, nonatomic) NSArray *channelAppViewModels;
@property (copy, nonatomic) NSArray *nonChannelAppViewModels;

- (void).cxx_destruct;
- (id)init;

@end
