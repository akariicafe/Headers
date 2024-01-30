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
- (const char **)xattrNamesBegin;
- (unsigned int)xattrNamesCount;
- (const char **)contentXattrNamesBegin;
- (unsigned int)contentXattrNamesCount;
- (const char **)contentXattrNamesEnd;
- (id)getXattrValue:(id)a0 error:(id *)a1;
- (id)initWithFD:(int)a0 sizeLimit:(long long)a1 syncable:(BOOL)a2 error:(id *)a3;
- (const char **)structuralXattrNamesBegin;
- (unsigned int)structuralXattrNamesCount;
- (const char **)structuralXattrNamesEnd;
- (const char **)xattrNamesEnd;
- (const char *)xattrNamesListBegin;
- (const char *)xattrNamesListEnd;

@end
