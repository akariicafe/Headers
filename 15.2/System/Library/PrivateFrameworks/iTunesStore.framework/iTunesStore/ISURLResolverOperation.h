@class NSURL, NSArray;

@interface ISURLResolverOperation : ISOperation {
    struct __CFHost { } *_host;
    NSURL *_url;
}

@property (copy, nonatomic) NSURL *URL;
@property (readonly) NSArray *resolvedAddresses;
@property (readonly) NSArray *resolvedAddressStrings;

- (id)url;
- (id)initWithURL:(id)a0;
- (void)setUrl:(id)a0;
- (void)run;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_runLookupForHostname:(id)a0;
- (void)_resolutionCompletedWithError:(id)a0;

@end
