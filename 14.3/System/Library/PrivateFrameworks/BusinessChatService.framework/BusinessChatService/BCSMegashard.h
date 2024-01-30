@class NSURL, BCSConfigItem;

@interface BCSMegashard : NSObject

@property (retain, nonatomic) BCSConfigItem *configItem;
@property (retain, nonatomic) NSURL *bloomFilterURL;

- (void).cxx_destruct;
- (id)initWithRecord:(id)a0 type:(long long)a1;

@end
