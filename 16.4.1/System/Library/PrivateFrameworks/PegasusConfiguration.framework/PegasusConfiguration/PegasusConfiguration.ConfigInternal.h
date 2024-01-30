@class NSString;

@interface PegasusConfiguration.ConfigInternal : NSObject <PegasusConfiguration.Config> {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ userAgent;
    void /* unknown type, empty encoding */ clientName;
    void /* unknown type, empty encoding */ userDefaults;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *userAgent;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) BOOL isEnabled;
@property (nonatomic, readonly) NSString *firstUseDescriptionText;
@property (nonatomic, readonly) BOOL isExpired;
@property (nonatomic, readonly) NSString *searchURLString;

- (id)rawConfig;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)findConfigForUserAgent:(id)a0;
- (id)valueForKey:(id)a0 ofType:(Class)a1;
- (id)valueForKey:(id)a0 shouldConsiderOverrides:(BOOL)a1;

@end
