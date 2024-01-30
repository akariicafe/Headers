@class NSUUID, HKSource, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_source;

@interface _HDAuthorizationRequestGroup : NSObject {
    NSMutableSet *_typesToWrite;
    NSMutableSet *_typesToRead;
    BOOL _inTransaction;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    NSObject<OS_dispatch_source> *_sessionTimeoutSource;
    HKSource *_source;
    NSUUID *_promptSessionIdentifier;
    id /* block */ _promptHandler;
}

- (id)description;
- (void).cxx_destruct;

@end
