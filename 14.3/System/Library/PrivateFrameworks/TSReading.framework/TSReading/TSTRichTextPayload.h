@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying>

@property (retain, nonatomic) TSWPStorage *storage;

- (id)initWithStorage:(id)a0;
- (void)dealloc;
- (id)string;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 storage:(id)a1;
- (BOOL)requiresRichText;

@end
