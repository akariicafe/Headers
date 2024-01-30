@class NSArray, TSWPStorage;

@interface TSAPdfTaggerTextColumnOwnerContext : TSAPdfTaggerContext

@property (readonly, copy, nonatomic) NSArray *columns;
@property (readonly, weak, nonatomic) TSWPStorage *storage;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)a0 columns:(id)a1 storage:(id)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
