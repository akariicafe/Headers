@interface NSMergeConflict : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain) id sourceObject;
@property (readonly, retain) id objectSnapshot;
@property (readonly, retain) id cachedSnapshot;
@property (readonly, retain) id persistedSnapshot;
@property (readonly) unsigned long long newVersionNumber;
@property (readonly) unsigned long long oldVersionNumber;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_doCleanupForXPCStore:(id)a0 context:(id)a1;
- (id)valueForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)ancestorSnapshot;
- (id)initWithSource:(id)a0 newVersion:(unsigned long long)a1 oldVersion:(unsigned long long)a2 cachedSnapshot:(id)a3 persistedSnapshot:(id)a4;
- (id)initWithSource:(id)a0 newVersion:(unsigned long long)a1 oldVersion:(unsigned long long)a2 snapshot1:(id)a3 snapshot2:(id)a4 snapshot3:(id)a5;

@end
