@class NSString, CNLabeledValue;

@interface MUContactLabeledValue : NSObject <MULabeledValueActionViewModelProviding>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) CNLabeledValue *labeledValue;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *valueString;
@property (retain, nonatomic) NSString *alternativeTitleString;
@property (retain, nonatomic) NSString *symbolName;
@property (nonatomic) long long actionVariant;
@property (nonatomic) BOOL emphasizeValueString;
@property (nonatomic) int analyticsTarget;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int analyticAction;

- (void).cxx_destruct;
- (id)glyphName;
- (id)initWithContactLabeledValue:(id)a0 type:(long long)a1;

@end
