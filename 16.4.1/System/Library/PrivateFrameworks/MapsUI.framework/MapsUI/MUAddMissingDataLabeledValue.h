@class NSString;

@interface MUAddMissingDataLabeledValue : NSObject <MULabeledValueActionViewModelProviding>

@property (readonly, nonatomic) long long type;
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

- (id)initWithType:(long long)a0;
- (void).cxx_destruct;
- (id)analyticsButtonValue;

@end
