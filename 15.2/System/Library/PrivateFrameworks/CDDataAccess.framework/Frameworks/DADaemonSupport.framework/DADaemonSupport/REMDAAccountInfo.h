@class NSString, REMObjectID;

@interface REMDAAccountInfo : NSObject <REMDAAccountProviding>

@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) REMObjectID *rem_accountObjectID;
@property (retain, nonatomic) NSString *accountDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)loggingDescription;
- (id)initWithAccountID:(id)a0 remAccountObjectID:(id)a1 accountDescription:(id)a2;

@end
