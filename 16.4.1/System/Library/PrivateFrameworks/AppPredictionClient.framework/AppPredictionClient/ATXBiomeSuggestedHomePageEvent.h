@class NSString;

@interface ATXBiomeSuggestedHomePageEvent : NSObject <NSSecureCoding, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long action;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithPageType:(long long)a0 identifier:(id)a1 action:(long long)a2;

@end
