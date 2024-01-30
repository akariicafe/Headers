@class NSString;

@interface PLAccountingNodeEntry : PLEntry

@property (readonly, nonatomic) NSString *name;

+ (void)load;
+ (id)entryKey;

- (id)initWithRootNodeID:(id)a0;
- (unsigned long long)hash;
- (id)initEntryWithRawData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;

@end
