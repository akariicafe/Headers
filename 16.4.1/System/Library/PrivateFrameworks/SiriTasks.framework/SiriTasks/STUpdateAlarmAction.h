@class NSArray;

@interface STUpdateAlarmAction : STAlarmAction {
    NSArray *_modifications;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)modifications;
- (id)_initWithModifications:(id)a0;

@end
