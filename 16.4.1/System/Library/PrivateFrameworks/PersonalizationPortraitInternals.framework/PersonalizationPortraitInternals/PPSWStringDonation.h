@class NSString;

@interface PPSWStringDonation : NSObject <BMIdentifiableContentEvent> {
    void /* unknown type, empty encoding */ uniqueId;
    void /* unknown type, empty encoding */ extractionContent;
}

@property (nonatomic, copy) NSString *uniqueId;
@property (nonatomic) void /* unknown type, empty encoding */ absoluteTimestamp;
@property (nonatomic, retain) void /* unknown type, empty encoding */ source;
@property (nonatomic, copy) NSString *extractionContent;
@property (nonatomic) void /* unknown type, empty encoding */ shouldConsume;

- (id)initWithLabeledStrings:(id)a0 bundleId:(id)a1 groupId:(id)a2 documentId:(id)a3;
- (id)init;
- (void).cxx_destruct;

@end
