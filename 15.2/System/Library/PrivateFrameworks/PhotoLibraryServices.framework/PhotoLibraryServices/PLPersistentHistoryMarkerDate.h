@class NSString, NSDate;

@interface PLPersistentHistoryMarkerDate : PLPersistentHistoryMarker <PLPersistentHistoryMarkerOverrides> {
    NSDate *_date;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDate:(id)a0;
- (id)overrride_shortDescription;
- (void).cxx_destruct;
- (id)overrride_changeRequestForFetching;

@end
