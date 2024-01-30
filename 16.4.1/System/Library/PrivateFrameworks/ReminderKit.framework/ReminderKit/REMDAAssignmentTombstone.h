@class NSUUID, NSString;

@interface REMDAAssignmentTombstone : NSObject <REMDAChangedIdentifierResult>

@property (retain, nonatomic) NSUUID *objectIdentifier;
@property (retain, nonatomic) NSUUID *owningReminderIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
