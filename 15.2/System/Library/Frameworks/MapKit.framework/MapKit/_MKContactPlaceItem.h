@class NSString, CNContact, MKMapItem, EKCalendarItem;

@interface _MKContactPlaceItem : NSObject <_MKPlaceItem> {
    MKMapItem *_mapItem;
    CNContact *_contact;
    unsigned long long _options;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) BOOL isIntermediateMapItem;
@property (readonly, nonatomic) EKCalendarItem *calendarItem;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) BOOL isContactPersisted;
@property (readonly, nonatomic) BOOL hasContactOnly;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeItemWithMapItem:(id)a0 contact:(id)a1 options:(unsigned long long)a2;

- (void).cxx_destruct;

@end
