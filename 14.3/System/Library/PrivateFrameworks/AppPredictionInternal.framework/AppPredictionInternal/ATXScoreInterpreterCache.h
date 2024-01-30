@class NSArray;

@interface ATXScoreInterpreterCache : NSObject

@property (readonly, nonatomic) NSArray *interpreters;

+ (id)sharedInstance;

- (id)initInternal;
- (void).cxx_destruct;
- (void)resetCache;
- (id)scoreInterpreterForConsumerSubType:(unsigned char)a0;

@end
