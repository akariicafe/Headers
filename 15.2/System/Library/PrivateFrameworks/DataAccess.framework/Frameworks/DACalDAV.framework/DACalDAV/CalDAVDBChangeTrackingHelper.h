@class NSString, NSMutableDictionary;

@interface CalDAVDBChangeTrackingHelper : NSObject {
    NSString *_clientIdentifier;
    int _initialSequenceNumber;
    NSMutableDictionary *_savedChanges;
}

- (void)saveChange:(int)a0 forEntityType:(int)a1;
- (BOOL)clearUnconsumedAndUnsavedChanges;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;

@end
