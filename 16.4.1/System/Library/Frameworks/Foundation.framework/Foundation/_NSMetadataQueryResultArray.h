@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (id)retain;
- (oneway void)release;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)retainCount;

@end
