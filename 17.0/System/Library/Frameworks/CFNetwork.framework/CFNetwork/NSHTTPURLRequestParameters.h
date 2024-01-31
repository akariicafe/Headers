@class NSString, NSMutableDictionary, NSArray, NSData;

@interface NSHTTPURLRequestParameters : NSObject <NSCoding> {
    NSString *method;
    NSMutableDictionary *fields;
    NSArray *extraCookies;
    NSData *data;
    unsigned long long pageNotFoundCacheLifetime;
    BOOL shouldHandleCookies;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
