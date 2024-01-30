@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {
    BOOL _cancelled;
    NSUUID *_uuid;
}

- (BOOL)isCanceled;
- (BOOL)isExpired;
- (id)id;
- (void).cxx_destruct;
- (id)forecast;
- (void)cancel;

@end
