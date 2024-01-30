@class NSString;

@interface CNAutocompleteNetworkActivityThrottlingPolicy : NSObject <CNAutocompleteNetworkActivityPolicy> {
    unsigned long long _lengthOfString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithString:(id)a0;
- (double)delayBeforeBeginningNetworkActivity;
- (BOOL)shouldSearchServers;

@end
