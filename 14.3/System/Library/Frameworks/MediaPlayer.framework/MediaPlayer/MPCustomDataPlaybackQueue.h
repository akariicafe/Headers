@class NSString, NSData;

@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *data;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0 data:(id)a1;
- (id)description;

@end
