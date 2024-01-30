@class NSDate;

@interface _MSTTLReference : NSObject

@property (retain, nonatomic) id value;
@property (nonatomic) double ttl;
@property (retain, nonatomic) NSDate *lastSet;

- (id)getValueWithGenerator:(id /* block */)a0;
- (id)initWithTTL:(double)a0;
- (void).cxx_destruct;

@end
