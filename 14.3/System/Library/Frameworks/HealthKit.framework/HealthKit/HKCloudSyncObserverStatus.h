@class NSError, NSDate;

@interface HKCloudSyncObserverStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL syncEnabled;
@property (copy, nonatomic) NSDate *lastPullDate;
@property (copy, nonatomic) NSDate *lastPushDate;
@property (copy, nonatomic) NSDate *lastPulledUpdateDate;
@property (copy, nonatomic) NSDate *restoreCompletionDate;
@property (copy, nonatomic) NSError *errorRequiringUserAction;
@property (nonatomic) long long dataUploadRequestStatus;
@property (copy, nonatomic) NSDate *dataUploadRequestStartDate;
@property (copy, nonatomic) NSDate *dataUploadRequestCompletionDate;

- (id)initWithSyncEnabled:(BOOL)a0 lastPullDate:(id)a1 lastPushDate:(id)a2 lastPulledUpdateDate:(id)a3 restoreCompletionDate:(id)a4 errorRequiringUserAction:(id)a5 dataUploadRequestStatus:(long long)a6 dataUploadRequestStartDate:(id)a7 dataUploadRequestCompletionDate:(id)a8;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
