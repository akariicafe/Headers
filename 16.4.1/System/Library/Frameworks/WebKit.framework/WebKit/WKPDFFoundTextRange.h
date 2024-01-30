@interface WKPDFFoundTextRange : UITextRange

@property (nonatomic) unsigned long long index;

+ (id)foundTextRangeWithIndex:(unsigned long long)a0;

- (BOOL)isEmpty;
- (id)end;
- (id)start;

@end
