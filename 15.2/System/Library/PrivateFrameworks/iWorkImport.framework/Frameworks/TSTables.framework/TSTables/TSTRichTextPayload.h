@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying>

@property (retain, nonatomic) TSWPStorage *storage;

+ (id)payloadWithStorage:(id)a0;

- (id)initWithStorage:(id)a0;
- (id)string;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 storage:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)tst_dataObjectIsEqual:(id)a0;
- (unsigned long long)tst_dataObjectHash;

@end
