@class NSString;

@interface WLKContentPlayRequest : WLKRequest

@property (readonly, copy, nonatomic) NSString *canonicalID;

- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* block */)a0;
- (id)initWithCanonicalID:(id)a0;

@end
