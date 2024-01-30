@class NSUUID;

@interface PHPerformChangesInstrumentation : NSObject {
    const char *_performChangesName;
    unsigned long long _signpostId;
    NSUUID *_uuid;
}

- (void).cxx_destruct;
- (id)init;

@end
