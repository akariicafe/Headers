@interface SCRCMathTableCellExpression : SCRCMathRowExpression {
    BOOL _didGetTablePosition;
    unsigned long long _rowIndex;
    unsigned long long _columnIndex;
    unsigned long long _tableRowCount;
    unsigned long long _tableColumnCount;
}

- (void)_getTableDataIfNecessary;
- (id)_prefixForCell;
- (id)_suffixForCell;
- (id)mathMLTag;
- (id)prefixForChildAtIndex:(unsigned long long)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)suffixForChildAtIndex:(unsigned long long)a0;

@end
