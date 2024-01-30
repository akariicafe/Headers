@class Protocol, NSString, NSUUID, MKFHomeAccessCodeDatabaseID, NSDate;

@interface _MKFHomeAccessCode : _MKFModel <MKFHomeAccessCode, MKFHomeAccessCodePrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *accessCode;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, copy, nonatomic) MKFHomeAccessCodeDatabaseID *databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfHomeAccessCode;
- (id)fetchOtherGuestAccessCodesInHome:(id)a0;
- (id)fetchOtherUserAccessCodesInHome:(id)a0;
- (id)homeForHomeAccessCode:(id)a0;
- (BOOL)validateAccessCodeForInsertOrUpdate:(id *)a0;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
