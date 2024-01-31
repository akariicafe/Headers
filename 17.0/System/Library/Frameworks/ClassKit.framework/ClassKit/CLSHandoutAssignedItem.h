@class NSString, NSMutableSet, CLSActivity;

@interface CLSHandoutAssignedItem : CLSObject <CLSRelationable> {
    NSString *_currentActivityID;
    NSString *_title;
    NSString *_identifier;
    CLSActivity *_currentActivity;
    NSMutableSet *_bundleIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *currentActivityID;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) int type;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSMutableSet *bundleIDs;
@property (readonly, nonatomic) CLSActivity *currentActivity;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (long long)authorizationStatus;
- (void)encodeWithCoder:(id)a0;
- (void)setAppIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)addBundleIDs:(id)a0;
- (id)createNewActivity;
- (long long)effectiveAuthorizationStatus;
- (id)initWithType:(int)a0 title:(id)a1 handoutAttachmentID:(id)a2;

@end
