@class NSArray, NSURLResponse, NSURLCredential, NSURLProtectionSpace, NSError;
@protocol NSURLAuthenticationChallengeSender;

@interface NSURLAuthenticationChallengeInternal : NSObject {
    NSURLProtectionSpace *space;
    NSURLCredential *proposedCredential;
    long long previousFailureCount;
    NSURLResponse *failureResponse;
    NSError *error;
    id<NSURLAuthenticationChallengeSender> sender;
    NSArray *protectionSpacesForChallenge;
    long long preferredProtSpaceIndex;
}

- (void)dealloc;

@end
