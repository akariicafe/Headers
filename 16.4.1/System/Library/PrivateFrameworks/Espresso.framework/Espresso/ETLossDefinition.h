@class NSString;

@interface ETLossDefinition : NSObject

@property (retain) NSString *outputName;
@property (readonly) NSString *inputName;
@property (readonly) NSString *targetInputName;
@property (readonly) NSString *lossOutputName;
@property (readonly) unsigned long long mode;

+ (id)L2LossWithInputName:(id)a0 targetInputName:(id)a1 lossOutputName:(id)a2;
+ (id)BuiltInLoss:(id)a0;
+ (id)crossEntropyLossWithInputName:(id)a0 targetInputName:(id)a1 lossOutputName:(id)a2;

- (void).cxx_destruct;
- (id)initWithMode:(unsigned long long)a0 inputName:(id)a1 targetName:(id)a2 lossOutputName:(id)a3;

@end
