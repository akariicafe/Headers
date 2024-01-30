@interface EDContentFormatsCollection : EDKeyedCollection {
    unsigned long long mNextContentFormatId;
}

- (void)setupDefaults;
- (id)init;
- (unsigned long long)addObject:(id)a0;
- (unsigned long long)addOrEquivalentObject:(id)a0;
- (void)addDefaultWithNSString:(id)a0 formatId:(unsigned long long)a1;
- (BOOL)isOverwritingKeyOK;

@end
