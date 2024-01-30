@interface SCRCMathTableCellExpression : SCRCMathRowExpression {
    BOOL _didGetTablePosition;
    unsigned long long _rowIndex;
    unsigned long long _columnIndex;
    unsigned long long _tableRowCount;
    unsigned long long _tableColumnCount;
}

- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)prefixForChildAtIndex:(unsigned long long)a0;
- (id)suffixForChildAtIndex:(unsigned long long)a0;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)mathMLTag;
- (void)_getTableDataIfNecessary;
- (id)_prefixForCell;
- (id)_suffixForCell;

@end
