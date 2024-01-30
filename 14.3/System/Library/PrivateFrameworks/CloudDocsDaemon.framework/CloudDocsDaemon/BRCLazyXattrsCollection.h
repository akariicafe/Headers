@class NSMutableData, NSMutableDictionary;

@interface BRCLazyXattrsCollection : NSObject {
    NSMutableData *_xattrNamesList;
    NSMutableData *_xattrNamesData;
    unsigned int _xattrCount;
    unsigned int _contentXattrCount;
    int _fd;
    long long _sizeLimit;
    long long _cacheSize;
    NSMutableDictionary *_cachedXattrs;
}

- (void)clearCache;
- (void).cxx_destruct;
- (id)initWithFD:(int)a0 sizeLimit:(long long)a1 syncable:(BOOL)a2 error:(id *)a3;
- (unsigned int)xattrNamesCount;
- (const char **)xattrNamesBegin;
- (unsigned int)structuralXattrNamesCount;
- (const char **)structuralXattrNamesBegin;
- (unsigned int)contentXattrNamesCount;
- (const char **)contentXattrNamesBegin;
- (const char *)xattrNamesListBegin;
- (const char *)xattrNamesListEnd;
- (const char **)xattrNamesEnd;
- (const char **)structuralXattrNamesEnd;
- (const char **)contentXattrNamesEnd;
- (id)getXattrValue:(id)a0 error:(id *)a1;

@end
