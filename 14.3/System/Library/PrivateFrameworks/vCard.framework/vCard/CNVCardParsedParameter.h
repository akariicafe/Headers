@class NSString, NSArray;

@interface CNVCardParsedParameter : NSObject

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *values;

+ (id)parameterWithName:(id)a0 values:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 values:(id)a1;

@end
