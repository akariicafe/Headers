@class NSString;

@interface CNRecentCallCountAndName : NSObject

@property (readonly, nonatomic) NSString *speakableName;
@property (readonly, nonatomic) unsigned long long callCount;

+ (id)instanceWithName:(id)a0 callCount:(unsigned long long)a1;

- (void).cxx_destruct;

@end
