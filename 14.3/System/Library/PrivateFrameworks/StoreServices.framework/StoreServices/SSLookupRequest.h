@class NSString, SSAuthenticationContext, SSLookupProperties;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {
    SSLookupProperties *_properties;
}

@property (readonly, copy, nonatomic) SSLookupProperties *_lookupProperties;
@property (copy, nonatomic) NSString *keyProfile;
@property (nonatomic) long long localizationStyle;
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext;
@property (nonatomic) BOOL authenticatesIfNeeded;
@property (nonatomic) long long personalizationStyle;
@property (nonatomic) long long resultFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)init;
- (id)valueForRequestParameter:(id)a0;
- (void)startWithLookupBlock:(id /* block */)a0;
- (void)_setTimeoutInterval:(id)a0;
- (void)dealloc;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (BOOL)start;
- (id)initWithLocation:(id)a0;
- (void)setValue:(id)a0 forRequestParameter:(id)a1;

@end
