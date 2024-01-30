@class NSString, NSArray, CKRecordID, NSData, NSNumber;

@interface WFGalleryPage : NSObject <WFCloudKitItem, NSMutableCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *minVersion;
@property (readonly, nonatomic) NSNumber *isRoot;
@property (readonly, nonatomic) NSArray *banners;
@property (readonly, nonatomic) NSArray *collections;
@property (readonly, nonatomic) NSArray *routines;
@property (readonly, nonatomic) NSArray *donations;
@property (readonly, nonatomic) NSArray *donationsGroupedByApp;
@property (copy, nonatomic) NSArray *automationSuggestions;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) CKRecordID *base;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (id)recordType;

@end
