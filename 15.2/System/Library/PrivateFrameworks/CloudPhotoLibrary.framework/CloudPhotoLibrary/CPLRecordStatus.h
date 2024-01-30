@class NSString, CPLRecordChange;

@interface CPLRecordStatus : NSObject <NSSecureCoding> {
    union { struct { unsigned char unknown : 1; unsigned char quarantined : 1; unsigned char resetting : 1; unsigned char uploaded : 1; unsigned char waitingForUpload : 1; unsigned char uploading : 1; unsigned char waitingForUpdate : 1; unsigned char updating : 1; unsigned char confirmed : 1; } status; unsigned int packedStatus; } _status;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long generation;
@property (nonatomic, getter=isUnknown) BOOL unknown;
@property (nonatomic, getter=isQuarantined) BOOL quarantined;
@property (nonatomic, getter=isResetting) BOOL resetting;
@property (nonatomic, getter=isUploaded) BOOL uploaded;
@property (nonatomic, getter=isWaitingForUpload) BOOL waitingForUpload;
@property (nonatomic, getter=isUploading) BOOL uploading;
@property (nonatomic, getter=isWaitingForUpdate) BOOL waitingForUpdate;
@property (nonatomic, getter=isUpdating) BOOL updating;
@property (nonatomic, getter=isConfirmed) BOOL confirmed;
@property (readonly, nonatomic) CPLRecordChange *record;
@property (readonly, nonatomic) NSString *statusDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithRecord:(id)a0 generation:(unsigned long long)a1;

@end
