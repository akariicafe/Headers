@class NSString, NSMutableDictionary, NSData, MPPlaybackArchiveDisplayProperties;

@interface MPPlaybackArchive : NSObject <MPMutablePlaybackArchive, NSCopying, NSSecureCoding> {
    BOOL _final;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long copyOptions;
@property (nonatomic) unsigned long long queueControlOptions;
@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *playbackSessionIdentifier;
@property (readonly, copy, nonatomic) NSString *playbackSessionType;
@property (readonly, copy, nonatomic) NSData *playbackSessionData;
@property (readonly, copy, nonatomic) NSString *fallbackStoreIdentifier;
@property (readonly, nonatomic) MPPlaybackArchiveDisplayProperties *displayProperties;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long supportedOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setDisplayProperties:(id)a0;
- (void)setBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSessionIdentifier:(id)a0 type:(id)a1 data:(id)a2;
- (void)setSupportedOptions:(unsigned long long)a0;
- (void)setFallbackStoreIdentifier:(id)a0;
- (id)initWithType:(long long)a0 sessionIdentifier:(id)a1 data:(id)a2 dataType:(id)a3 bundleIdentifier:(id)a4 supportedOptions:(unsigned long long)a5 displayProperties:(id)a6;
- (void)setBOOLValue:(BOOL)a0 forOption:(long long)a1;
- (BOOL)boolValueForOption:(long long)a0;
- (id)copyWithOptions:(unsigned long long)a0;
- (void)setType:(long long)a0;

@end
