@class NSString;

@interface ML3AccountCacheEntry : NSObject

@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *altDSID;

- (void).cxx_destruct;
- (id)initWithAppleID:(id)a0 altDSID:(id)a1;

@end
