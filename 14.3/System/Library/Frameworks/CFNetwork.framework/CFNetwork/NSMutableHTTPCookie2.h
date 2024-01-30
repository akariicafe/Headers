@class NSString, NSDate;

@interface NSMutableHTTPCookie2 : NSHTTPCookie2

@property (retain) NSString *name;
@property (retain) NSString *value;
@property (retain) NSString *domain;
@property (retain) NSString *path;
@property (retain) NSDate *expirationDate;
@property BOOL secure;
@property BOOL httpOnly;
@property BOOL hostOnly;
@property (retain) NSString *partition;
@property long long source;
@property long long sameSite;

- (void)setExpirationDate:(id)a0;
- (void)setName:(id)a0;
- (void)setSecure:(BOOL)a0;
- (void)setSameSite:(long long)a0;
- (void)setHttpOnly:(BOOL)a0;
- (void)setHostOnly:(BOOL)a0;
- (void)setPartition:(id)a0;
- (void)setDomain:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1 domain:(id)a2;
- (void)setSource:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)setPath:(id)a0;
- (void)setValue:(id)a0;

@end
