@class NSAttributedString, HKEmergencyCardFooterCell;

@interface HKEmergencyCardFooterTableItem : HKEmergencyCardTableItem {
    HKEmergencyCardFooterCell *_cell;
}

@property (retain, nonatomic) NSAttributedString *attributedTitleForFooter;
@property (copy, nonatomic) id /* block */ shouldInteractWithURLBlock;

- (id)_cell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (id)initInEditMode:(BOOL)a0;
- (BOOL)hasPresentableData;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;

@end
