@class NSString;
@protocol DAOofResponseDelegate;

@interface DAOofSettingsInfo : DAOofParams

@property (retain, nonatomic) NSString *requestID;
@property (weak, nonatomic) id<DAOofResponseDelegate> consumer;

- (void).cxx_destruct;

@end
