@class NSString;

@interface DEEvaluator : NSObject

@property (retain, nonatomic) NSString *templateDir;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) id globalParameters;
@property (retain, nonatomic) NSString *typeName;
@property (retain, nonatomic) NSString *propName;
@property (retain, nonatomic) id parameters;

- (id)evaluate;
- (void).cxx_destruct;

@end
