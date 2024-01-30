@class NSDateInterval;
@protocol BMStream;

@interface BMStreamQuery : NSObject

@property (readonly, nonatomic) id<BMStream> stream;
@property (readonly, nonatomic) NSDateInterval *interval;
@property (readonly, nonatomic) long long origin;

+ (id)publisherForStream:(id)a0 interval:(id)a1 origin:(long long)a2;
+ (id)publisherForStream:(id)a0 interval:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStream:(id)a0 interval:(id)a1 origin:(long long)a2;

@end
