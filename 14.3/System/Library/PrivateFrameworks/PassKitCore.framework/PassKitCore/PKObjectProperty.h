@class NSString;

@interface PKObjectProperty : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *variableName;
@property (readonly, copy, nonatomic) Class aClass;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *valueGetter;

- (void).cxx_destruct;
- (id)initWithProperty:(struct objc_property { } *)a0;

@end
