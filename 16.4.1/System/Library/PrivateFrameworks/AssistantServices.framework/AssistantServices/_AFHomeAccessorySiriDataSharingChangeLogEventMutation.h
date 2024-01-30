@class NSString, AFHomeAccessorySiriDataSharingChangeLogEvent, NSDate;

@interface _AFHomeAccessorySiriDataSharingChangeLogEventMutation : NSObject <AFHomeAccessorySiriDataSharingChangeLogEventMutating> {
    AFHomeAccessorySiriDataSharingChangeLogEvent *_base;
    NSDate *_date;
    long long _previousOptInStatus;
    long long _newOptInStatus;
    long long _changeSource;
    NSString *_changeReason;
    NSString *_buildVersion;
    NSString *_productVersion;
    NSString *_schemaVersion;
    NSString *_logEventIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasDate : 1; unsigned char hasPreviousOptInStatus : 1; unsigned char hasNewOptInStatus : 1; unsigned char hasChangeSource : 1; unsigned char hasChangeReason : 1; unsigned char hasBuildVersion : 1; unsigned char hasProductVersion : 1; unsigned char hasSchemaVersion : 1; unsigned char hasLogEventIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProductVersion:(id)a0;
- (void)setChangeSource:(long long)a0;
- (BOOL)isDirty;
- (void)setSchemaVersion:(id)a0;
- (id)initWithBase:(id)a0;
- (void)setBuildVersion:(id)a0;
- (void)setDate:(id)a0;
- (id)getDate;
- (id)getBuildVersion;
- (void).cxx_destruct;
- (long long)getChangeSource;
- (id)getChangeReason;
- (id)getLogEventIdentifier;
- (long long)getNewOptInStatus;
- (long long)getPreviousOptInStatus;
- (id)getProductVersion;
- (id)getSchemaVersion;
- (void)setChangeReason:(id)a0;
- (void)setLogEventIdentifier:(id)a0;
- (void)setNewOptInStatus:(long long)a0;
- (void)setPreviousOptInStatus:(long long)a0;

@end
