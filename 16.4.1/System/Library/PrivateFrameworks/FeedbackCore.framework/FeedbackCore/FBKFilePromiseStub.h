@class NSString, NSDate, NSNumber, FBKFormResponseStub;

@interface FBKFilePromiseStub : FBKManagedFeedbackObject <FBKDownloadableFilePromise>

@property (copy, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *remoteID;
@property (nonatomic) long long statusEnum;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) FBKFormResponseStub *formResponseStub;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSString *localizedDownloadErrorString;

+ (id)entityName;
+ (id)fetchRequest;

- (BOOL)canDownload;
- (unsigned long long)downloadState;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
