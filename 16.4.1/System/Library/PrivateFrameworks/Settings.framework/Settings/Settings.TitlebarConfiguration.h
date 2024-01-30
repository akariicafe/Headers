@interface Settings.TitlebarConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ imageSymbols;
    void /* unknown type, empty encoding */ imageLabels;
    void /* unknown type, empty encoding */ cloudSyncConfiguration;
    void /* unknown type, empty encoding */ useCloudSyncConfiguration;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
