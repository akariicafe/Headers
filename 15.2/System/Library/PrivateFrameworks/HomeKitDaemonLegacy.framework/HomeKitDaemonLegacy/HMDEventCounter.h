@class NSArray;

@interface HMDEventCounter : NSObject

@property unsigned long long count;
@property (retain) NSArray *observers;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCount:(unsigned long long)a0;

@end
