@class NSMutableArray;

@interface RUIActionSignal : NSObject

@property (nonatomic) unsigned long long topSignal;
@property (retain, nonatomic) NSMutableArray *subActions;

+ (unsigned long long)signalTypeForString:(id)a0;
+ (id)signalWithType:(unsigned long long)a0;
+ (id)stringForActionSignal:(unsigned long long)a0;
+ (id)signalWithString:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
