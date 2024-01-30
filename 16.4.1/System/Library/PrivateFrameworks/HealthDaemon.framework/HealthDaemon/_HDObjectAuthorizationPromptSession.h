@class NSString, HDProfile, NSUUID, NSMutableArray;

@interface _HDObjectAuthorizationPromptSession : NSObject {
    HDProfile *_profile;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    BOOL _didStartTransaction;
    id /* block */ _sessionCompletion;
    NSString *_bundleIdentifier;
    NSUUID *_sessionIdentifier;
}

- (void).cxx_destruct;

@end
