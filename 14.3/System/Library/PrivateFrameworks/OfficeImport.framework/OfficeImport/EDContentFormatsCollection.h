@interface EDContentFormatsCollection : EDKeyedCollection {
    unsigned long long mNextContentFormatId;
}

- (id)init;
- (void)setupDefaults;
- (unsigned long long)addObject:(id)a0;
- (unsigned long long)addOrEquivalentObject:(id)a0;
- (void)addDefaultWithNSString:(id)a0 formatId:(unsigned long long)a1;
- (BOOL)isOverwritingKeyOK;

@end
