@class NSString, NSURL, NSArray;

@interface RCRequestInfo : NSObject

@property (readonly, copy, nonatomic) NSString *requestKey;
@property (readonly, copy, nonatomic) NSString *responseKey;
@property (readonly, nonatomic) NSURL *fallbackURL;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) NSArray *additionalChangeTags;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 requestType:(unsigned long long)a3 additionalChangeTags:(id)a4;

@end
