@class NSURL, NSNumber, NSDictionary;

@interface APTapAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long actionType;
@property (retain) NSURL *actionURL;
@property double confirmedClickInterval;
@property (retain) NSNumber *adamIdentifier;
@property (retain) NSDictionary *iTunesMetadata;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
