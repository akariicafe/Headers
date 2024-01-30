@class NSString;

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;

+ (Class)meltedClass;
+ (BOOL)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (double)longitude;
- (double)latitude;
- (id)remObjectID;
- (id)address;
- (double)radius;
- (id)title;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)a0 inChangeSet:(id)a1;
- (id)mapKitHandle;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)updatedStructuredLocation;
- (int)referenceFrame;
- (id)uuid;
- (id)updateParentToCommitSelf:(id)a0;
- (id)_structuredLocation;

@end
