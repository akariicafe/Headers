@class ODDLayoutVariablePropertySet;

@interface ODDLayoutNode : ODDLayoutObjectList {
    ODDLayoutVariablePropertySet *mVariableList;
}

- (id)description;
- (id)variableList;
- (void).cxx_destruct;
- (void)setVariableList:(id)a0;

@end
