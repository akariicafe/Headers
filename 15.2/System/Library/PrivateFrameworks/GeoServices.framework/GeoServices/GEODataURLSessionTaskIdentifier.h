@interface GEODataURLSessionTaskIdentifier : NSObject <NSCopying> {
    long long _sessionIdentity;
    unsigned long long _taskIdentifier;
    unsigned long long _hash;
}

- (id)description;
- (id)initWithSession:(id)a0 task:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
