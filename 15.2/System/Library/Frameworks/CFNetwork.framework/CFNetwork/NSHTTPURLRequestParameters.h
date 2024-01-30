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

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
