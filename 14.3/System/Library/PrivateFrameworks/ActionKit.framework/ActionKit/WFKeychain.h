@class NSString;

@interface WFKeychain : NSObject

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSString *accessGroup;

- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (id)dataForKey:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1;
- (id)items;
- (id)initWithService:(id)a0 accessGroup:(id)a1;

@end
