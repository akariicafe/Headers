@class NSArray;

@interface CHPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence;

- (id)init;
- (void)dealloc;
- (id)initWithStep:(id)a0;
- (id)process:(id)a0;
- (id)initWithSequence:(id)a0;

@end
