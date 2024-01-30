@class NSString, NSArray, NSNumber;

@interface _RWIAutomaticInspectionSession : NSObject {
    NSNumber *_pageId;
    NSString *_applicationIdentifier;
    unsigned long long _currentDebuggerIndex;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *debuggers;

- (void)start;
- (void).cxx_destruct;
- (void)_sendQuery;
- (id)initWithPageId:(id)a0 applicationIdentifier:(id)a1 debuggers:(id)a2;
- (BOOL)matchesPageId:(id)a0 applicationIdentifier:(id)a1;
- (BOOL)receivedRejectResponse;

@end
