@class NSString, AMSLookup, NSArray;

@interface IMContentLookupService : NSObject

@property (retain, nonatomic) AMSLookup *amsLookup;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *artworkType;
@property (retain, nonatomic) NSArray *ids;
@property (nonatomic) long long version;

- (void)request:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_configureRequest;
- (id)initWithIds:(id)a0;

@end
