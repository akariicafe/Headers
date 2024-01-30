@class NSDictionary, NSString, NSDate;

@interface WLKStoredConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *requiredRequestKeyValuePairs;
@property (nonatomic) BOOL activeUser;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *vppaState;
@property (retain, nonatomic) NSString *utsc;
@property (readonly, nonatomic) NSString *utsk;

- (void).cxx_destruct;
- (id)description;

@end
