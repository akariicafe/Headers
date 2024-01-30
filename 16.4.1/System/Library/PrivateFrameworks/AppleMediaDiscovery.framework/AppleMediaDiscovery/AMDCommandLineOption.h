@class NSString;

@interface AMDCommandLineOption : NSObject

@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) NSString *helpText;
@property (nonatomic) BOOL isBool;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *shortName;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 withDefaultValue:(id)a1 withHelpText:(id)a2 withShortName:(id)a3 andIsBoolFlag:(BOOL)a4;

@end
