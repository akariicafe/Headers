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
- (const char *)xattrNamesListEnd;
- (unsigned int)xattrNamesCount;
- (unsigned int)contentXattrNamesCount;
- (id)initWithFD:(int)a0 sizeLimit:(long long)a1 syncable:(BOOL)a2 error:(id *)a3;
- (const char **)xattrNamesBegin;
- (void).cxx_destruct;
- (id)getXattrValue:(id)a0 error:(id *)a1;
- (const char *)xattrNamesListBegin;
- (unsigned int)structuralXattrNamesCount;
- (const char **)contentXattrNamesEnd;
- (const char **)contentXattrNamesBegin;
- (const char **)structuralXattrNamesBegin;
- (const char **)structuralXattrNamesEnd;
- (const char **)xattrNamesEnd;

@end
