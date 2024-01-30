@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand {
    long long _presentationStyle;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedShortTitle;

- (long long)presentationStyle;
- (id)newCommandEventWithState:(long long)a0;
- (void)setPresentationStyle:(long long)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;

@end
