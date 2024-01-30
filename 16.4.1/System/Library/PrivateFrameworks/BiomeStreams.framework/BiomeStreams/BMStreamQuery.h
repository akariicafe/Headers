@class NSDateInterval;
@protocol BMStream;

@interface BMStreamQuery : NSObject

@property (readonly, nonatomic) id<BMStream> stream;
@property (readonly, nonatomic) NSDateInterval *interval;
@property (readonly, nonatomic) long long origin;

+ (id)new;
+ (id)publisherForStream:(id)a0 interval:(id)a1;
+ (id)publisherForStream:(id)a0 interval:(id)a1 origin:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0 interval:(id)a1 origin:(long long)a2;

@end
