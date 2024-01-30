@interface EDContentFormatsCollection : EDKeyedCollection {
    unsigned long long mNextContentFormatId;
}

- (unsigned long long)addObject:(id)a0;
- (void)setupDefaults;
- (id)init;
- (void)addDefaultWithNSString:(id)a0 formatId:(unsigned long long)a1;
- (unsigned long long)addOrEquivalentObject:(id)a0;
- (BOOL)isOverwritingKeyOK;

@end
