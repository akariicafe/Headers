@class NSString, NSMutableDictionary, NSURL, NSArray, NSDictionary;

@interface RCRequestInfo : NSObject

@property (readonly, nonatomic) NSMutableDictionary *mutableAdditionalFields;
@property (readonly, copy, nonatomic) NSString *requestKey;
@property (readonly, copy, nonatomic) NSString *responseKey;
@property (readonly, nonatomic) NSURL *fallbackURL;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) NSArray *additionalChangeTags;
@property (readonly, nonatomic) unsigned long long requestFeedType;
@property (readonly, nonatomic) NSString *requestCacheKey;
@property (readonly) NSDictionary *allAdditionalFields;

- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 requestType:(unsigned long long)a3 additionalChangeTags:(id)a4;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(id)a0 forAdditionalField:(id)a1;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 requestType:(unsigned long long)a3 additionalChangeTags:(id)a4 requestFeedType:(unsigned long long)a5;
- (unsigned long long)hash;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2;

@end
