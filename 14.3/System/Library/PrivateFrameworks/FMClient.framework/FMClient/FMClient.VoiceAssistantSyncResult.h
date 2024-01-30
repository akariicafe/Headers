@class NSSet, NSString;

@interface FMClient.VoiceAssistantSyncResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ devices;
    void /* unknown type, empty encoding */ anchor;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSSet *devices;
@property (nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevices:(id)a0 anchor:(id)a1;

@end
