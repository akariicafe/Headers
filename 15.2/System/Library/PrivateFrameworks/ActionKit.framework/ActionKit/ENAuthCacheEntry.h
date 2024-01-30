@class EDAMAuthenticationResult, NSDate;

@interface ENAuthCacheEntry : NSObject

@property (retain, nonatomic) EDAMAuthenticationResult *authResult;
@property (retain, nonatomic) NSDate *cachedDate;

+ (id)entryWithResult:(id)a0;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
