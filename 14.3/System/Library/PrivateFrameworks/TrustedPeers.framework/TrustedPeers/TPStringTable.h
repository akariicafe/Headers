@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface TPStringTable : NSObject

@property (readonly) unsigned long long _count;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSHashTable *table;

+ (id)defaultTable;

- (void).cxx_destruct;
- (id)stringWithString:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)setWithArray:(id)a0;

@end
