@class NSError, NSString;

@interface TRIDownloadNotification : NSObject <TRIDownloadNotificationProtocol>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long progress;
@property (readonly, nonatomic) unsigned long long progressMaxValue;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dispatchQueue;
+ (id)_descriptionForErrorCode:(unsigned long long)a0;
+ (id)notificationNameForKey:(id)a0;
+ (id)_notificationWithState:(unsigned long long)a0;
+ (BOOL)_notifyDownloadUpdateForKey:(id)a0 withState:(unsigned long long)a1;
+ (id)registerDownloadNotificationForKey:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
+ (void)deregisterNotificationWithToken:(id)a0;
+ (BOOL)notifyDownloadProgressForKey:(id)a0 withProgress:(unsigned long long)a1;
+ (BOOL)notifyDownloadCompletedForKey:(id)a0;
+ (BOOL)notifyDownloadFailedForKey:(id)a0 withError:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 progress:(unsigned long long)a1 error:(id)a2;

@end
