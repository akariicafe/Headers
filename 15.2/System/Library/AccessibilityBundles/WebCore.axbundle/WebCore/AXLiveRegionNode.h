@class NSString;

@interface AXLiveRegionNode : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) unsigned long long traits;
@property (weak, nonatomic) id object;

+ (id)createNodeFromObject:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
