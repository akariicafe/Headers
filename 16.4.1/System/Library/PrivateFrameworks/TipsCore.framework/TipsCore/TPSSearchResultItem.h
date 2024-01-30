@class NSString;

@interface TPSSearchResultItem : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ documentIdentifier;
    void /* unknown type, empty encoding */ collectionIdentifier;
    void /* unknown type, empty encoding */ correlationIdentifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ body;
    void /* unknown type, empty encoding */ relevance;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
