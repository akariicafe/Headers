@class NSString, NSArray;

@interface GEORequestCounterProactiveTileDownloadInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *policies;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 policies:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
