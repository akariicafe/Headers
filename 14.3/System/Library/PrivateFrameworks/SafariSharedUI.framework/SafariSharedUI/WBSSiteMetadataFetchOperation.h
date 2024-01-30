@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation

@property (getter=_status, setter=_setStatus:) long long status;
@property (readonly, nonatomic) WBSSiteMetadataRequest *request;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)initWithRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;

@end
