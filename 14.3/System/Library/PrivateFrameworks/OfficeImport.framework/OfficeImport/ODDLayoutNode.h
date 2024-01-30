@class ODDLayoutVariablePropertySet;

@interface ODDLayoutNode : ODDLayoutObjectList {
    ODDLayoutVariablePropertySet *mVariableList;
}

- (void).cxx_destruct;
- (id)description;
- (id)variableList;
- (void)setVariableList:(id)a0;

@end
