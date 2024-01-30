@class NSString;

@interface DRPasteAnnouncementEndpoint : NSObject <NSSecureCoding> {
    NSString *_localizedName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)_initWithLocalizedName:(id)a0;
- (void).cxx_destruct;
- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
