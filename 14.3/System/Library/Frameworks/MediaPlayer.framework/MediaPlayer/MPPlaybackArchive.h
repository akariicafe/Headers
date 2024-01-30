@class NSString, NSMutableDictionary, NSData, MPPlaybackArchiveDisplayProperties;

@interface MPPlaybackArchive : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long copyOptions;
@property (nonatomic) unsigned long long queueControlOptions;
@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *playbackSessionIdentifier;
@property (readonly, copy, nonatomic) NSString *playbackSessionType;
@property (readonly, copy, nonatomic) NSData *playbackSessionData;
@property (readonly, nonatomic) MPPlaybackArchiveDisplayProperties *displayProperties;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long supportedOptions;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setBOOLValue:(BOOL)a0 forOption:(long long)a1;
- (id)initWithType:(long long)a0 sessionIdentifier:(id)a1 data:(id)a2 dataType:(id)a3 bundleIdentifier:(id)a4 supportedOptions:(unsigned long long)a5 displayProperties:(id)a6;
- (BOOL)boolValueForOption:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
