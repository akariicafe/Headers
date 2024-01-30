@class NSUUID, NSString;

@interface REMDAHashtagTombstone : NSObject <REMDAChangedIdentifierResult>

@property (retain, nonatomic) NSUUID *objectIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSUUID *reminderIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
