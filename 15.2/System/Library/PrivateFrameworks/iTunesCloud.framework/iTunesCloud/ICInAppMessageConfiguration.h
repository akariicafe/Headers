@class NSURL, NSDictionary;

@interface ICInAppMessageConfiguration : NSObject {
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) NSURL *reportEventURL;
@property (readonly, nonatomic) NSURL *serialCheckURL;
@property (readonly, nonatomic) NSURL *syncURL;
@property (readonly, nonatomic) NSURL *resourceDomainURL;
@property (readonly, nonatomic) long long syncPollingInterval;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
