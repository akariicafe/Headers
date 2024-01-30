@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (unsigned int)_versionNumber;
- (id)initWithOwnedKKsD:(id)a0 andVersion:(unsigned long long)a1;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;

@end
