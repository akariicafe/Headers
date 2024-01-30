@class NSString;

@interface CDDCloudKitScheduleActivityMessage : CDDCloudKitMessage {
    unsigned long long _activityType;
    NSString *_storePath;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
