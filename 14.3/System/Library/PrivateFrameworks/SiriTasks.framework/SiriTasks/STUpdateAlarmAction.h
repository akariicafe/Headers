@class NSArray;

@interface STUpdateAlarmAction : STAlarmAction {
    NSArray *_modifications;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)modifications;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithModifications:(id)a0;

@end
