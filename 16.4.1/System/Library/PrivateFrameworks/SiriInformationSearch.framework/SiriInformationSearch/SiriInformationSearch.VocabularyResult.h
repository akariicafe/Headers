@class NSString;

@interface SiriInformationSearch.VocabularyResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ itemId;
    void /* unknown type, empty encoding */ itemType;
    void /* unknown type, empty encoding */ fieldTypes;
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ spanBegin;
    void /* unknown type, empty encoding */ spanEnd;
    void /* unknown type, empty encoding */ semanticValue;
    void /* unknown type, empty encoding */ fields;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
