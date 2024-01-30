@class NSUUID;

@interface PHPerformChangesInstrumentation : NSObject {
    const char *_performChangesName;
    unsigned long long _signpostId;
    NSUUID *_uuid;
}

- (id)init;
- (void).cxx_destruct;

@end
