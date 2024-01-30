@interface FCRecordSourceFetchContext : NSObject {
    BOOL _refresh;
    unsigned long long _cachePolicy;
    double _maxCachedAge;
}

@end
