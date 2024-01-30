@class NSURL, NSString, NSDictionary;

@interface AMSMarketingItemActionComponent : NSObject

@property (readonly, nonatomic) NSURL *artworkURL;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSDictionary *rawValues;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
