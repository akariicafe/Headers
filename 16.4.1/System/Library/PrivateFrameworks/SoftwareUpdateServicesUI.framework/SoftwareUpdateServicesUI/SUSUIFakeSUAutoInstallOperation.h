@class NSUUID;

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {
    BOOL _cancelled;
    NSUUID *_uuid;
}

- (BOOL)isCanceled;
- (BOOL)isExpired;
- (id)forecast;
- (id)id;
- (void)cancel;
- (void).cxx_destruct;

@end
