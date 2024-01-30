@class NSString;

@interface FKTextCandidate : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly) float confidence;

- (void)dealloc;
- (id)initWithText:(id)a0 confidence:(float)a1;

@end
