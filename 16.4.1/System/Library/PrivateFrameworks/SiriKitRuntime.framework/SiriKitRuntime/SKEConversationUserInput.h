@class NSString;

@interface SKEConversationUserInput : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resultCandidateId;
    void /* unknown type, empty encoding */ speechPackage;
    void /* unknown type, empty encoding */ nlResponse;
    void /* unknown type, empty encoding */ userSpecificInfo;
    void /* unknown type, empty encoding */ executionOverrideContext;
    void /* unknown type, empty encoding */ utterance;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
