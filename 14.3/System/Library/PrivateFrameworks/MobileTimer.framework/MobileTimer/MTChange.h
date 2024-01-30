@class NSString;

@interface MTChange : NSObject

@property (copy, nonatomic) NSString *property;
@property (retain, nonatomic) id changedValue;
@property (retain, nonatomic) id originalValue;

- (void).cxx_destruct;
- (id)initWithProperty:(id)a0 changedValue:(id)a1 originalValue:(id)a2;
- (id)description;

@end
