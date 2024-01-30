@class NSString;

@interface PKShow : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ descriptionText;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ feedUrl;
    void /* unknown type, empty encoding */ podcastUuid;
    void /* unknown type, empty encoding */ artworkDictionary;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL isInLibrary;
@property (nonatomic, readonly) BOOL isSubscribed;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ storeId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)artworkUrlFor:(struct CGSize { double x0; double x1; })a0;

@end
