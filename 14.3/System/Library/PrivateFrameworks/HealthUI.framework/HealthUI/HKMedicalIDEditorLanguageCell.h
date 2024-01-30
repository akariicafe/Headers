@interface HKMedicalIDEditorLanguageCell : HKMedicalIDEditorCell

@property (copy, nonatomic) id /* block */ editAction;

- (void).cxx_destruct;
- (void)beginEditing;
- (void)setBeginEditAction:(id /* block */)a0;
- (void)setValueLanguageText:(id)a0;

@end
