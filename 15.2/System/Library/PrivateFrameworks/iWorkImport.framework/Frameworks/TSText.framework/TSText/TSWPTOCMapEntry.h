@class TSWPTOCEntryStyle;

@interface TSWPTOCMapEntry : NSObject

@property (retain, nonatomic) TSWPTOCEntryStyle *tocEntryStyle;
@property (nonatomic) BOOL showInTOC;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (id)initWithTOCEntryStyle:(id)a0 showInTOC:(BOOL)a1;

@end
