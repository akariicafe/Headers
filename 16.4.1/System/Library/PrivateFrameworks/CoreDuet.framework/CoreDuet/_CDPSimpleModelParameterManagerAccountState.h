@class _CDPSimpleModelParameterManagerTuningValue, NSMutableArray, _CDPModelTuningState;

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _CDPSimpleModelParameterManagerTuningValue *previousBestTuningValue;
@property (retain, nonatomic) NSMutableArray *tuningValues;
@property (retain, nonatomic) _CDPModelTuningState *lastTuningState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
