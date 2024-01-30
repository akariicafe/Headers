@class NSString, WLKPlaybackSummary;

@interface WLKDecoratedPlaybackSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WLKPlaybackSummary *summary;
@property (readonly, copy, nonatomic) NSString *canonicalID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSummary:(id)a0 canonicalID:(id)a1;

@end
