@class NSArray;

@interface HMDEventCounter : NSObject

@property unsigned long long count;
@property (retain) NSArray *observers;

- (id)init;
- (id)initWithCount:(unsigned long long)a0;
- (void).cxx_destruct;

@end
