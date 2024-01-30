@class NSArray, NSMutableDictionary;

@interface _KSFileDirectory : _KSFileEntry <NSSecureCoding, NSFastEnumeration> {
    NSMutableDictionary *_contents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSArray *contents;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)entryForName:(id)a0;
- (void)consistencyCheck;
- (id)initWithName:(id)a0;
- (void)addEntry:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)restoreToPath:(id)a0;
- (void)performOnEverything:(id /* block */)a0;
- (id)initWithDirectory:(id)a0 captureContents:(BOOL)a1 storeRoot:(BOOL)a2;
- (id)findEntryWithComparison:(id /* block */)a0 recursively:(BOOL)a1;
- (void)removeEntryWithName:(id)a0;

@end
