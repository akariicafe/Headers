@class NSDictionary, NSString;

@interface WFDefaultShortcutPersonalizationContext : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL userHasShortcutsInLibrary;
@property (nonatomic) BOOL userHasShazamApp;
@property (nonatomic) BOOL userHasQRCodeScannerInControlCenter;
@property (nonatomic) unsigned long long mediaLibrarySongCount;
@property (nonatomic) unsigned long long numberOfNotesCreatedInLast7Days;
@property (nonatomic) unsigned long long numberOfScreenshotsSavedInLast15Days;
@property (nonatomic) unsigned long long numberOfPhotosAirDroppedInLast15Days;
@property (nonatomic) unsigned long long numberOfPhotosEditedInLast15Days;
@property (nonatomic) unsigned long long numberOfCalendarEventsCreatedInLast15Days;
@property (nonatomic) unsigned long long numberOfCalendarEventsWithEmailableAttendeesWithin7Days;
@property (nonatomic) unsigned long long numberOfCalendarEventsWithPhysicalLocationsWithin7Days;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (void)getCurrentUserContextWithCompletionHandler:(id /* block */)a0;


@end
