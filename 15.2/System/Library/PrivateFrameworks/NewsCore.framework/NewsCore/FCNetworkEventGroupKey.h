@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying> {
    int _eventType;
    unsigned long long _sessionID;
    NSString *_respondingPOP;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
