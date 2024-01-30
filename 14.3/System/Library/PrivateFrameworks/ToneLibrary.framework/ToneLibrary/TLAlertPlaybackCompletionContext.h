@class NSError;

@interface TLAlertPlaybackCompletionContext : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long playbackCompletionType;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
