@class NSString;

@interface PLAccountingNodeEntry : PLEntry

@property (readonly, nonatomic) NSString *name;

+ (id)entryKey;
+ (void)load;

- (id)initEntryWithRawData:(id)a0;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRootNodeID:(id)a0;

@end
