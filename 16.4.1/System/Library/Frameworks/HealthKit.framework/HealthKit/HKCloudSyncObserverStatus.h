@class NSError, NSDate;

@interface HKCloudSyncObserverStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL syncEnabled;
@property (nonatomic) BOOL accountSupportsSecureContainer;
@property (copy, nonatomic) NSDate *lastPullDate;
@property (copy, nonatomic) NSDate *lastPushDate;
@property (copy, nonatomic) NSDate *lastPulledUpdateDate;
@property (copy, nonatomic) NSDate *restoreCompletionDate;
@property (copy, nonatomic) NSError *errorRequiringUserAction;
@property (nonatomic) long long dataUploadRequestStatus;
@property (copy, nonatomic) NSDate *dataUploadRequestStartDate;
@property (copy, nonatomic) NSDate *dataUploadRequestCompletionDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSyncEnabled:(BOOL)a0 accountSupportsSecureContainer:(BOOL)a1 lastPullDate:(id)a2 lastPushDate:(id)a3 lastPulledUpdateDate:(id)a4 restoreCompletionDate:(id)a5 errorRequiringUserAction:(id)a6 dataUploadRequestStatus:(long long)a7 dataUploadRequestStartDate:(id)a8 dataUploadRequestCompletionDate:(id)a9;

@end
