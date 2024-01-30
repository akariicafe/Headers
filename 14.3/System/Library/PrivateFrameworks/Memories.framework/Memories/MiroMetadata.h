@class NSArray, NSString;

@interface MiroMetadata : NSObject

@property (retain) NSArray *allRanges;
@property (readonly) NSArray *loudnessRanges;
@property (copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)setRanges:(id)a0;
- (void)addRanges:(id)a0;
- (void)removeRangesOfType:(unsigned long long)a0;
- (void)getMetadata;

@end
