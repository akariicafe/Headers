@class NSString, NSData;

@interface DRPasteAnnouncementApplicationEndpoint : DRPasteAnnouncementEndpoint {
    struct { unsigned char isHomeScreen : 1; } _flags;
}

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSData *persistentIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)homeScreenEndpoint;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocalizedName:(id)a0 persistentIdentifier:(id)a1;

@end
