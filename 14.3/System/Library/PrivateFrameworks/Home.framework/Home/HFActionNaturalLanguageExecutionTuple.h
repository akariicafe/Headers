@interface HFActionNaturalLanguageExecutionTuple : NSObject

@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;
@property (retain, nonatomic) id third;

+ (id)tuple:(id)a0 second:(id)a1;
+ (id)tuple:(id)a0 second:(id)a1 third:(id)a2;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (void).cxx_destruct;
- (id)initWithFirst:(id)a0 second:(id)a1 third:(id)a2;

@end
