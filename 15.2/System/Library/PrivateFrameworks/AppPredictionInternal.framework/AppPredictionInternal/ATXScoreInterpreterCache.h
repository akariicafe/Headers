@class NSArray;

@interface ATXScoreInterpreterCache : NSObject

@property (readonly, nonatomic) NSArray *interpreters;

+ (id)sharedInstance;

- (id)initInternal;
- (void).cxx_destruct;
- (id)scoreInterpreterForConsumerSubType:(unsigned char)a0;
- (void)resetCache;

@end
