@class NSString, NSDictionary, NSError;

@interface TPKContent : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ cachedViewModel;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ userInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ tip;
@property (nonatomic) void /* unknown type, empty encoding */ displayCount;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) void /* unknown type, empty encoding */ customizationID;
@property (nonatomic) void /* unknown type, empty encoding */ version;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic) void /* unknown type, empty encoding */ state;
@property (nonatomic, retain) void /* unknown type, empty encoding */ monitoringEvents;
@property (nonatomic, readonly) BOOL hasTipContent;
@property (nonatomic, readonly) BOOL isLocalContent;
@property (nonatomic, readonly) NSError *parsingError;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

+ (id)emptyContent;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCopy:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)updateState:(long long)a0;
- (id)initWithDiscoverabilityTip:(id)a0 monitoringEvents:(id)a1 customizationID:(long long)a2 userInfo:(id)a3;
- (BOOL)isEqual:(id)a0;
- (void)incrementDisplaycount;
- (unsigned long long)monitoringEventOptionsMatchedWithRegistrableEventIdentifier:(id)a0;
- (id)init;
- (unsigned long long)monitoringEventOptionsForCurrentState;
- (id)initWithIdentifier:(id)a0 monitoringEvents:(id)a1 customizationID:(long long)a2 userInfo:(id)a3;
- (void)createCachedViewModelUsingViewDelegate:(id)a0;
- (void).cxx_destruct;
- (void)updateDisplayCount:(long long)a0;

@end
