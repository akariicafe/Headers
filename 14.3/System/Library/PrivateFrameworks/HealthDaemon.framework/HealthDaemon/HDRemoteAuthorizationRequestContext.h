@class HKAuthorizationRequestRecord;

@interface HDRemoteAuthorizationRequestContext : NSObject

@property (retain, nonatomic) HKAuthorizationRequestRecord *requestRecord;
@property (copy, nonatomic) id /* block */ requestSentHandler;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
