@class NSString;

@interface WLKAdamIDToCanonicalIDResponse : NSObject

@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic) NSString *showID;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *type;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
