@class EDAMAuthenticationResult, NSDate;

@interface ENAuthCacheEntry : NSObject

@property (retain, nonatomic) EDAMAuthenticationResult *authResult;
@property (retain, nonatomic) NSDate *cachedDate;

+ (id)entryWithResult:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
