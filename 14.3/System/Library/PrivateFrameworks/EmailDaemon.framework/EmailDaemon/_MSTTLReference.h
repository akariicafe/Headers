@class NSDate;

@interface _MSTTLReference : NSObject

@property (retain, nonatomic) id value;
@property (nonatomic) double ttl;
@property (retain, nonatomic) NSDate *lastSet;

- (void).cxx_destruct;
- (id)initWithTTL:(double)a0;
- (id)getValueWithGenerator:(id /* block */)a0;

@end
