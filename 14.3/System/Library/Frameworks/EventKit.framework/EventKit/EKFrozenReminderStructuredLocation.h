@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;

+ (id)uniqueIdentifierForREMObject:(id)a0;
+ (Class)meltedClass;
+ (BOOL)canCommitSelf;

- (int)referenceFrame;
- (double)radius;
- (id)_structuredLocation;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)a0 inChangeSet:(id)a1;
- (id)updatedStructuredLocation;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)address;
- (double)latitude;
- (id)mapKitHandle;
- (id)remObjectID;
- (id)uuid;
- (id)updateParentToCommitSelf:(id)a0;
- (id)title;
- (double)longitude;

@end
