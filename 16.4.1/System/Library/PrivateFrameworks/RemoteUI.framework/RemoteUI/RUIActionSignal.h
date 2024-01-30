@class NSMutableArray;

@interface RUIActionSignal : NSObject

@property (nonatomic) unsigned long long topSignal;
@property (retain, nonatomic) NSMutableArray *subActions;

+ (id)signalWithType:(unsigned long long)a0;
+ (unsigned long long)signalTypeForString:(id)a0;
+ (id)signalWithString:(id)a0;
+ (id)stringForActionSignal:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
