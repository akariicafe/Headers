@class NSString, NSDictionary;

@interface TPSContextualBiomeEvent : TPSContextualEvent

@property (copy, nonatomic) NSString *stream;
@property (copy, nonatomic) NSDictionary *filterInfo;
@property (readonly, copy, nonatomic) id /* block */ filterHandler;

+ (BOOL)supportsSecureCoding;
+ (id)observationDateFromEvent:(id)a0;
+ (id)streamFromDictionary:(id)a0;

- (id)publisherFromStartTime:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id /* block */)filterHandler;

@end
