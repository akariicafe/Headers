@class NSMutableArray;

@interface RUIActionSignal : NSObject

@property (nonatomic) unsigned long long topSignal;
@property (retain, nonatomic) NSMutableArray *subActions;

+ (id)stringForActionSignal:(unsigned long long)a0;
+ (id)signalWithType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
