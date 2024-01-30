@class NSKnownKeysDictionary;

@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary *_snapshot;
    unsigned long long _version;
}

- (id)valueForKey:(id)a0;
- (const id *)knownKeyValuesPointer;
- (unsigned int)_versionNumber;
- (void)dealloc;
- (id)initWithOwnedKKsD:(id)a0 andVersion:(unsigned long long)a1;
- (id)_snapshot_;

@end
