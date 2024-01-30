@class NSString;

@interface MFMailMessageLibraryFixPopUidsUniquenessConstraintUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_popUIDsTableSchema;
+ (int)runWithConnection:(id)a0;


@end
