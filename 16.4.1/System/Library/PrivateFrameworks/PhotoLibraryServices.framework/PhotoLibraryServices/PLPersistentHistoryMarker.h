@class NSString;

@interface PLPersistentHistoryMarker : NSObject <PLPersistentHistoryMarkerOverrides>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;

+ (id)markerWithToken:(id)a0;
+ (id)markerWithDate:(id)a0;
+ (id)markerWithTransaction:(id)a0;

- (id)overrride_shortDescription;
- (id)overrride_changeRequestForFetching;
- (id)changeRequestForFetching;

@end
