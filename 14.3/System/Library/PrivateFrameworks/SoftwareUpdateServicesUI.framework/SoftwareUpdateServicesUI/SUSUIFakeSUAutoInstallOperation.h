@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {
    BOOL _cancelled;
    NSUUID *_uuid;
}

- (void)cancel;
- (id)id;
- (BOOL)isCanceled;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (id)forecast;

@end
