@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation

@property (getter=_status, setter=_setStatus:) long long status;
@property (readonly, nonatomic) WBSSiteMetadataRequest *request;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)initWithRequest:(id)a0;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;

@end
