@class NSDictionary;
@protocol CRKKeychainItem;

@interface CRKAnnotatedCredential : NSObject

@property (readonly, nonatomic) id<CRKKeychainItem> credential;
@property (readonly, copy, nonatomic) NSDictionary *annotation;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCredential:(id)a0 annotation:(id)a1;

@end
