@interface HSUpdateRequest : HSRequest {
    long long _connectionType;
}

+ (id)requestWithDatabaseRevision:(unsigned int)a0 sessionID:(unsigned int)a1 connectionType:(long long)a2;

- (BOOL)isConcurrent;
- (double)timeoutInterval;
- (id)canonicalResponseForResponse:(id)a0;
- (id)initWithDatabaseRevision:(unsigned int)a0 sessionID:(unsigned int)a1 connectionType:(long long)a2;
- (id)_bodyDataForDatabaseRevision:(unsigned int)a0 sessionID:(unsigned int)a1;

@end
