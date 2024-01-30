@class NSString;

@interface CLSPublicEventPerformer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *iTunesIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocalizedName:(id)a0 iTunesIdentifier:(id)a1;

@end
