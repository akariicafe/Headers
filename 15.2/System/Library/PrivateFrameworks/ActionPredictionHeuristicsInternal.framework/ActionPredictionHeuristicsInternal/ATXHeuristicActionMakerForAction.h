@class ATXAction;

@interface ATXHeuristicActionMakerForAction : ATXHeuristicActionMaker {
    ATXAction *_action;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_makeAction;
- (id)actionTypeName;

@end
