@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (unsigned long long)count;
- (void)dealloc;
- (oneway void)release;

@end
