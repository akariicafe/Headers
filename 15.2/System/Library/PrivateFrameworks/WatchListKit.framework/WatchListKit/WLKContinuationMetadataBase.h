@class NSString, NSDictionary, NSURL, WLKBasicContentMetadata, NSDate;

@interface WLKContinuationMetadataBase : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) WLKBasicContentMetadata *movieOrShowContent;
@property (readonly, nonatomic) NSURL *contentTVAppDeeplinkURL;
@property (readonly, nonatomic) long long contextEnum;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSString *localizedContext;
@property (readonly, nonatomic) BOOL isRental;
@property (readonly, nonatomic) BOOL isPurchase;
@property (readonly, nonatomic) NSDate *timestamp;

+ (void)add:(id)a0 toCollection:(id)a1;
+ (void)remove:(id)a0 fromCollection:(id)a1;
+ (long long)_contextForString:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0 context:(id)a1;
- (id)_mergingIdentifier;

@end
