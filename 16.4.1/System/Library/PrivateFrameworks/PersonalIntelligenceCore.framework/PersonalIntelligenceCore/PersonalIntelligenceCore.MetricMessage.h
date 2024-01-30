@class NSString;

@interface PersonalIntelligenceCore.MetricMessage : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ backend;
    void /* unknown type, empty encoding */ messageIdentifier;
    void /* unknown type, empty encoding */ messageContents;
    void /* unknown type, empty encoding */ $__lazy_storage_$_codableArray;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ dataVersion;
@property (nonatomic, readonly) NSString *description;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)json;
- (id)init;
- (id)serialize;
- (void).cxx_destruct;

@end
