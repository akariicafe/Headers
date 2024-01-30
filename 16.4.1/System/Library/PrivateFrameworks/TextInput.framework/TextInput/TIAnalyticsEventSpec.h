@class NSDictionary, NSString, NSArray;

@interface TIAnalyticsEventSpec : NSObject

@property (readonly, nonatomic) NSDictionary *fieldSpecsByName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isInputModeRequired;
@property (readonly, nonatomic) NSArray *fieldSpecs;

+ (id)eventSpecWithName:(id)a0 inputModeRequired:(BOOL)a1;
+ (id)eventSpecWithName:(id)a0 inputModeRequired:(BOOL)a1 fieldSpecs:(id)a2;

- (id)fieldSpecWithName:(id)a0;
- (id)initWithName:(id)a0 inputModeRequired:(BOOL)a1 fieldSpecs:(id)a2;
- (void).cxx_destruct;

@end
