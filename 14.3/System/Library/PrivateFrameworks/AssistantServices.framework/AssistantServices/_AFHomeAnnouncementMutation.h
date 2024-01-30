@class NSString, NSDate, AFHomeAnnouncement;

@interface _AFHomeAnnouncementMutation : NSObject <AFHomeAnnouncementMutating> {
    AFHomeAnnouncement *_baseModel;
    NSString *_identifier;
    unsigned long long _startedHostTime;
    unsigned long long _finishedHostTime;
    NSDate *_startedDate;
    NSDate *_finishedDate;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasStartedHostTime : 1; unsigned char hasFinishedHostTime : 1; unsigned char hasStartedDate : 1; unsigned char hasFinishedDate : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setIdentifier:(id)a0;
- (void)setStartedHostTime:(unsigned long long)a0;
- (void)setFinishedHostTime:(unsigned long long)a0;
- (void)setStartedDate:(id)a0;
- (void)setFinishedDate:(id)a0;
- (id)initWithBaseModel:(id)a0;

@end
