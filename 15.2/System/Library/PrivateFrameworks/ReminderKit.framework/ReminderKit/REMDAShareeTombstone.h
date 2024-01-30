@class NSUUID, NSString;

@interface REMDAShareeTombstone : NSObject <REMDAChangedIdentifierResult>

@property (retain, nonatomic) NSUUID *objectIdentifier;
@property (retain, nonatomic) NSUUID *owningListIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
