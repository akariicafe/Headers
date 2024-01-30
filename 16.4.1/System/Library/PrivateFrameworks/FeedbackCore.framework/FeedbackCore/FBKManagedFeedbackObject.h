@class NSNumber;

@interface FBKManagedFeedbackObject : NSManagedObject

@property (retain) NSNumber *ID;
@property (retain) NSNumber *remoteID;

+ (id)entityName;
+ (id)importFromJSONArray:(id)a0 intoContext:(id)a1;
+ (id)importFromJSONObject:(id)a0 intoContext:(id)a1;

- (id)entityName;
- (BOOL)isEqualToFBKObject:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
