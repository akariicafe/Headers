@class NSNumber, NSString;

@interface VUIInAppMessagingSubscriptionQuery : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) NSString *attributePath;
@property (readonly, nonatomic) NSString *queryString;

+ (id)queryWithString:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (unsigned long long)_lookupTypeForString:(id)a0;

@end
