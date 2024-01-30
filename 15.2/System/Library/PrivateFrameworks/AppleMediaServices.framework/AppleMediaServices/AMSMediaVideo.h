@class NSURL, NSDictionary;

@interface AMSMediaVideo : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *videoDictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)name;

@end
