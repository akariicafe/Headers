@class NSArray;

@interface CHPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence;

- (id)initWithSequence:(id)a0;
- (id)init;
- (id)process:(id)a0;
- (void)dealloc;
- (id)initWithStep:(id)a0;

@end
