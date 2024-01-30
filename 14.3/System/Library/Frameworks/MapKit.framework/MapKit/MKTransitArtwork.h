@class NSString;
@protocol GEOTransitTextDataSource, GEOTransitShieldDataSource, GEOTransitIconDataSource;

@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource> {
    NSString *_accessibilityText;
}

@property (readonly, nonatomic) int artworkSourceType;
@property (readonly, nonatomic) int artworkUseType;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (readonly, nonatomic) id<GEOTransitTextDataSource> textDataSource;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)artworkWithText:(id)a0;
+ (id)artworkWithShield:(id)a0 accessibilityText:(id)a1;
+ (id)artworkWithIcon:(id)a0 accessibilityText:(id)a1;

- (id)initWithShield:(id)a0 accessibilityText:(id)a1;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (id)initWithIcon:(id)a0 accessibilityText:(id)a1;
- (id)initWithIcon:(id)a0 fallbackShield:(id)a1 accessibilityText:(id)a2;

@end
