@class NSDate, NSObject, _CDEventIndexerBookmark;
@protocol OS_os_transaction;

@interface _CDEventIndexerContext : NSObject {
    _CDEventIndexerBookmark *_bookmark;
    long long _currentVersion;
    unsigned long long _batchSize;
    id /* block */ _completion;
    NSDate *_indexDate;
    NSObject<OS_os_transaction> *_transaction;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
