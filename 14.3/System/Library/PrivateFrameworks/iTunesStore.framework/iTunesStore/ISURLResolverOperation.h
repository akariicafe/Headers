@class NSURL, NSArray;

@interface ISURLResolverOperation : ISOperation {
    struct __CFHost { } *_host;
    NSURL *_url;
}

@property (copy, nonatomic) NSURL *URL;
@property (readonly) NSArray *resolvedAddresses;
@property (readonly) NSArray *resolvedAddressStrings;

- (void)run;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)url;
- (void)setUrl:(id)a0;
- (void)_runLookupForHostname:(id)a0;
- (void)_resolutionCompletedWithError:(id)a0;

@end
