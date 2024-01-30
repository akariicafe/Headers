@class NSString;

@interface ML3DatabaseColumn : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long datatype;
@property (readonly, nonatomic) unsigned long long columnConstraints;
@property (readonly, nonatomic) id defaultValue;

+ (id)columnWithName:(id)a0 datatype:(unsigned long long)a1 constraints:(unsigned long long)a2 defaultValue:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 datatype:(unsigned long long)a1 constraints:(unsigned long long)a2 defaultValue:(id)a3;
- (id)_columnDefinitionSQL;

@end
